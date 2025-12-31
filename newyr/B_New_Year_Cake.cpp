#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int ans = 0;

        for (int k = 1; k <= 60; k++) {
            int white1 = 0, dark1 = 0;
            int white2 = 0, dark2 = 0;

            for (int i = 0; i < k; i++) {
                int sz = (1LL << i);
                if (i % 2 == 0) {
                    white1 += sz;  
                    dark2 += sz;   
                } else {
                    dark1 += sz;
                    white2 += sz;
                }
            }

            bool ok1 = (white1 <= a && dark1 <= b);
            bool ok2 = (white2 <= a && dark2 <= b);

            if (ok1 || ok2)
                ans = k;
            else
                break;
        }

        cout << ans << '\n';
    }
    return 0;
}
