#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, l, r, k;
        cin >> n >> l >> r >> k;
        if (n == 2)
        {
            cout << -1 << '\n';
            continue;
        }
        if (n % 2 == 1)
        {
            cout << l << '\n';
            continue;
        }
        int flag = 0;

        for (int i = 1; i <= r; i*=2)
        {
            if (i>l)
            {
                flag = 1;
                if (k <= n-2) 
                cout<<l<<'\n';
                else 
                cout<<i<<'\n';
                break;
            }
        }
        if (!flag)
        {
            cout << -1 << '\n';
        }
    }
    return 0;
}