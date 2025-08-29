#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<double> a(n + 1); 

        int px, py, qx, qy;
        cin >> px >> py >> qx >> qy;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        
        double d = sqrt((px - qx) * 1LL * (px - qx) + (py - qy) * 1LL * (py - qy));
        a[n] = d;

        sort(a.begin(), a.end());

        double sum = 0;
        for (int i = 0; i <= n; i++) {
            sum += a[i];
        }

        if (a[n] <= sum - a[n]) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
