#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int f = 0;
        int i;
        for (i = 0; i < 6; i++)
        {
            if (x.find(s) != string::npos)
            {
                f = 1;
                break;
            }
            x+=x;
        }
        if (f)
            cout << i << '\n';
        else
        {
            cout << -1 << '\n';
        }
    }
    return 0;
}