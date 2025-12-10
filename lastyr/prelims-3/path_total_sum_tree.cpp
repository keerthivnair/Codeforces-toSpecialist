// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5;

// Number of vertices
int n;

// Adjacency list representation
// of the tree
vector<int> tree[sz];

// Array that stores the subtree size
int subtree_size[sz];

// Array to mark all the
// vertices which are visited
int vis[sz];

// Utility function to create an
// edge between two vertices
void addEdge(int a, int b)
{

    // Add a to b's list
    tree[a].push_back(b);

    // Add b to a's list
    tree[b].push_back(a);
}

// Function to calculate the subtree size
int dfs(int node)
{

    // Mark visited
    vis[node] = 1;
    subtree_size[node] = 1;

    // For every adjacent node
    for (auto child : tree[node]) {

        // If not already visited
        if (!vis[child]) {

            // Recursive call for the child
            subtree_size[node] += dfs(child);
        }
    }
    return subtree_size[node];
}

// Function to calculate the
// contribution of each edge
void contribution(int node, int& ans)
{

    // Mark current node as visited
    vis[node] = true;

    // For every adjacent node
    for (int child : tree[node]) {

        // If it is not already visited
        if (!vis[child]) {
            ans += (subtree_size[child]
                    * (n - subtree_size[child]));
            contribution(child, ans);
        }
    }
}

// Function to return the required sum
int getSum()
{

    // First pass of the dfs
    memset(vis, 0, sizeof(vis));
    dfs(0);

    // Second pass
    int ans = 0;
    memset(vis, 0, sizeof(vis));
    contribution(0, ans);

    return ans;
}

// Driver code
int main()
{
    n = 5;

    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(1, 4);

    cout << getSum();

    return 0;
}