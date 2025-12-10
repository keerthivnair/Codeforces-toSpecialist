#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // Prefix sums for 1s
        vector<int> pref1(n);
        pref1[0] = (a[0] == 1);
        for (int i = 1; i < n; i++)
            pref1[i] = pref1[i-1] + (a[i] == 1);

        
        vector<int> prefAdj(n, 0);
        for (int i = 1; i < n; i++)
            prefAdj[i] = prefAdj[i-1] + (a[i] == a[i-1]);

        while (k--) {
            int l, r;
            cin >> l >> r;
            --l; --r;

            int c1 = (l > 0) ? pref1[r] - pref1[l-1] : pref1[r];
            int len = r - l + 1;
            int c0 = len - c1;

            if (c1 % 3 != 0 || c0 % 3 != 0) {
                cout << -1 << '\n';
                continue;
            }

            // Check adjacency existence in O(1)
            int hasAdj = (prefAdj[r] - prefAdj[l]) > 0;

            if (hasAdj)
                cout << len / 3 << '\n';
            else
                cout << 2 + max(0, (len - 3) / 3) << '\n';
        }
    }
}
