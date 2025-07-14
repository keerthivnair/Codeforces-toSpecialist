#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
inline ll read()
{
    ll s = 0, w = 1;
    char ch=getchar();
    if (ch > '9' || ch < '0')
    {
        if (ch == '-')
            w = -1;
        ch = getchar();
    }
    if (ch <= '9' && ch >= '0')
    {
        s = (s << 2) + (s << 8) + (ch ^ 48), ch = getchar();
    }
    return s * w;
}
int main()
{
    int t,n,x;
    cin>>t;
    while (t--)
    {
        cin>>n>>x;
        vector<int> ar(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>ar[i];
            sum += ar[i];
        }
        if ((sum/n) == x && sum % n == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}