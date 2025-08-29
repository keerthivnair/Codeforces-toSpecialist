#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
        if (n % 2 == 0)
        {
            cout << 2 << '\n';
            cout << 1 << ' ' << n << '\n';
            cout << 1 << ' ' << n << '\n';
        }
        else
        {
            cout << 4 << '\n';
            cout<<1<<' '<<n-1<<'\n';
            cout<<1<<' '<<n-1<<'\n';
            cout<<n-1<<' '<<n<<'\n';
            cout<<n-1<<' '<<n<<'\n';
        }
    }
    return 0;
}