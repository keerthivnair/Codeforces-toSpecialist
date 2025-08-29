#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mpp[a[i]] += 1;
        }

        if (mpp.size() > 2) {
            cout << "NO" << '\n';
        }
        else {
            cout << "YES" << '\n';
        }
    }
    return 0;
}
