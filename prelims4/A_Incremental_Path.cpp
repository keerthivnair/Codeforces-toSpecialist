#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        unordered_set<int> black;
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            black.insert(x - 1);
        }

        int curr = 0;
        for (char c : s) {
            if (c == 'A') {
                curr++;
                black.insert(curr);
            } else { 
                curr++;
                while (black.count(curr))
                    curr++;
                black.insert(curr);
                while (black.count(curr))
                    curr++;
            }
        }

        cout << black.size() << "\n";
        vector<int> sorted_black(black.begin(), black.end());
        sort(sorted_black.begin(), sorted_black.end());
        for (int x : sorted_black)
            cout << x + 1 << " ";
        cout << "\n";
    }
}
