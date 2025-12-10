#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    double ans = 0.0;
    for(int i=1;i<=6;i++) {
        ans+=(2*i - 1)*(1.0/36.0    )*i;
    }
    cout << ans <<'\n';
    return 0;
}