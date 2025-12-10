#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
        int count = 0;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0 && flag == 0)
            {
                flag = 1;
                count += 1;
            }
            if (a[i] == 0)
            {
                flag = 0;
            }
        }
        if(count == 0) cout << 0 <<'\n';
        if(count > 1) cout << 2<<'\n';
        else if(count == 1) cout << 1 <<'\n';
    } return 0;
}