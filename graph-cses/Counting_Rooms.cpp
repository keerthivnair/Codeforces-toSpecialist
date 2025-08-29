#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int n, m;
vector<string> grid;
vector<vector<bool>> visited;


int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

bool isValid(int r, int c) {
    return r >= 0 && r < n && c >= 0 && c < m && grid[r][c] == '.' && !visited[r][c];
}

void iterativeDFS(int startR, int startC) {
    stack<pair<int, int>> s;
    s.push({startR, startC});
    visited[startR][startC] = true;

    while (!s.empty()) {
        pair<int, int> current = s.top();
        s.pop();

        int r = current.first;
        int c = current.second;

        for (int i = 0; i < 4; ++i) {
            int newR = r + dr[i];
            int newC = c + dc[i];

            if (isValid(newR, newC)) {
                visited[newR][newC] = true;
                s.push({newR, newC});
            }
        }
    }
}

int main() {
    cin >> n >> m;

    grid.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    visited.assign(n, vector<bool>(m, false));
    int roomCount = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                iterativeDFS(i, j);
                roomCount++;
            }
        }
    }

    cout << roomCount << endl;

    return 0;
}