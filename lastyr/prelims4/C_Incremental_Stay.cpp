#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }

        for (int k = 1; k <= n; k++) {
            int count = 0;
            stack<int> entry;
            long long ans = 0;

            for (int i = 0; i < 2 * n; i++) {
                if (count < k && entry.size() < 2 * n - i - 1) {
                    entry.push(i);
                    count++;
                } 
                else if (!entry.empty()) {
                    int s = entry.top();
                    entry.pop();

                    
                    ans += abs(a[i] - a[s]);
                    count--;
                }
            }

            cout << ans << " ";
        }
        cout << "\n";
    }
    return 0;
}
