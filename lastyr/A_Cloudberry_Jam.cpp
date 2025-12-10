#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
inline ll read()
{
    ll s = 0, w = 1;
    char ch = getchar();
    while (ch > '9' || ch < '0')
    {
        if (ch == '-')
            w = -1;
        ch = getchar();
    }
    while (ch <= '9' && ch >= '0')
    {
        s = (s << 2) + (s << 3) + (ch ^ 48), ch = getchar();
    }
    return s * w;
}

int main()
{
    ll t;
    t = read();
    while (t--)
    {
        ll n;
        n = read();
        ll t=2*n;
        cout << t << endl;
    }
    return 0;
}