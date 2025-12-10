#include <iostream>
#include <vector>
#include <climits>
#include <mpi.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

const int INF = 1e9; // Using a large number for infinity

void print_matrix(const vector<vector<int>>& matrix, int V) {
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            if (matrix[i][j] == INF) {
                cout << "INF\t";
            } else {
                cout << matrix[i][j] << "\t";
            }
        }
        cout << endl;
    }
}

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int rank, size;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    int V = 5; // Number of vertices for Test Case 2
    vector<vector<int>> graph;
    double start_time, end_time;

    if (rank == 0) {
        // --- Initialize Graph (Using Test Case 2) ---
        // Change this section for Test Case 1
        V = 5;
        graph = {
            {0, 3, 8, INF, -4},
            {INF, 0, INF, 1, 7},
            {INF, 4, 0, INF, INF},
            {2, INF, -5, 0, INF},
            {INF, INF, INF, 6, 0}
        };

        /*
        // --- Test Case 1 Graph ---
        V = 6;
        graph = {
            {0, 5, 9, 11, INF, INF},
            {5, 0, INF, INF, 3, INF},
            {9, INF, 0, 4, 3, INF},
            {11, INF, 4, 0, INF, 14},
            {INF, 3, 3, INF, 0, 7},
            {INF, INF, INF, 14, 7, 0}
        };
        */
        
        cout << "--- Floyd-Warshall Algorithm (MPI) ---" << endl;
        cout << "Initial Distance Matrix:" << endl;
        print_matrix(graph, V);
        cout << "------------------------------------" << endl;
    }
    
    // Broadcast the number of vertices to all processes
    MPI_Bcast(&V, 1, MPI_INT, 0, MPI_COMM_WORLD);
    
    // Start timing on the root process
    if (rank == 0) {
        start_time = MPI_Wtime();
    }
    
    // Each process calculates its share of rows
    int rows_per_proc = V / size;
    vector<vector<int>> local_rows(rows_per_proc, vector<int>(V));

    // Scatter the graph rows from the root process to all processes
    // Flatten the 2D vector to a 1D array for MPI
    vector<int> flat_graph;
    if (rank == 0) {
        for(int i=0; i<V; ++i) {
            flat_graph.insert(flat_graph.end(), graph[i].begin(), graph[i].end());
        }
    }
    vector<int> local_flat_rows(rows_per_proc * V);
    MPI_Scatter(flat_graph.data(), rows_per_proc * V, MPI_INT,
                local_flat_rows.data(), rows_per_proc * V, MPI_INT, 0, MPI_COMM_WORLD);

    // Convert the received flat array back to a 2D vector
    for(int i=0; i<rows_per_proc; ++i) {
        for(int j=0; j<V; ++j) {
            local_rows[i][j] = local_flat_rows[i*V + j];
        }
    }

    // Main Floyd-Warshall loop
    vector<int> k_row(V);
    for (int k = 0; k < V; ++k) {
        // Determine which process owns the k-th row
        int root = k / rows_per_proc;

        // If this process is the root for this iteration, copy its local k-th row
        if (rank == root) {
            int local_k = k % rows_per_proc;
            k_row = local_rows[local_k];
        }

        // Broadcast the k-th row from the root process to all others
        MPI_Bcast(k_row.data(), V, MPI_INT, root, MPI_COMM_WORLD);

        // Update the local rows based on the received k-th row
        for (int i = 0; i < rows_per_proc; ++i) {
            for (int j = 0; j < V; ++j) {
                if (local_rows[i][k] != INF && k_row[j] != INF) {
                    local_rows[i][j] = min(local_rows[i][j], local_rows[i][k] + k_row[j]);
                }
            }
        }
    }

    // Gather the results back to the root process
    // First, convert local 2D vector back to 1D array
    for(int i=0; i<rows_per_proc; ++i) {
        for(int j=0; j<V; ++j) {
            local_flat_rows[i*V + j] = local_rows[i][j];
        }
    }

    MPI_Gather(local_flat_rows.data(), rows_per_proc * V, MPI_INT,
               flat_graph.data(), rows_per_proc * V, MPI_INT, 0, MPI_COMM_WORLD);

    if (rank == 0) {
        end_time = MPI_Wtime();
        
        // Convert the final flat array back to the 2D graph matrix
        for(int i=0; i<V; ++i) {
            for(int j=0; j<V; ++j) {
                graph[i][j] = flat_graph[i*V + j];
            }
        }

        cout << "Final Shortest Path Matrix (Parallel):" << endl;
        print_matrix(graph, V);
        
        cout << "\n--- Execution Time ---" << endl;
        cout << "Parallel Code (Execution Time): " << (end_time - start_time) * 1e6 << " microseconds" << endl;
        // You would run a separate serial version to get its time for a full comparison table.
    }

    MPI_Finalize();
    return 0;
}