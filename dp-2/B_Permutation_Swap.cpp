#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll maxdis = a[0];
        for (int i =0;i<n;i++)
        {
            cin >> a[i];
            maxdis = __gcd(maxdis,abs(a[i]-(i+1)));
        }
        cout << maxdis <<'\n';
    } return 0;
}