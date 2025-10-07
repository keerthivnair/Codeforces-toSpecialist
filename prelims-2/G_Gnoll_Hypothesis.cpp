#include <bits/stdc++.h>
using namespace std;

long double nCk(int n, int k) {
    if (k > n) return 0;
    if (k > n - k) k = n - k;
    long double res = 1.0;
    for (int i = 1; i <= k; i++) {
        res = res * ( (long double)(n - i + 1) / (long double)i );
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<long double> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

   
    long double denom = nCk(n, k);

    vector<long double> res(n, 0.0);
    for (int i = 0; i < n; i++) {
        for (int d = 0; d <= n - 1; d++) {
            int mod = i - d;
            if (mod < 0) mod += n;
            if(mod>n-1) break;
            res[i] += nCk(n - d - 1, k - 1) / denom * a[mod];
        }
    }

    cout << fixed << setprecision(10);
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << "\n";

    return 0;
}
