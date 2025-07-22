#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> ar(n);
        ll ans = b;
        for(int i=0;i<n;i++) {
            cin >>ar[i];
            ans= ans + min(1+ar[i],a) -1;
        }
        cout <<ans<<'\n';
    } return 0;
}