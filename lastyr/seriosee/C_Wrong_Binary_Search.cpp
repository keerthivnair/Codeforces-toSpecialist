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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        int fl = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                count++;
            if (s[i] == '1')
            {
                if (count == 1)
                {
                    fl = 0;
                    break;
                }
                else
                {
                    count = 0;
                }
            }
        }
        if (fl)
            cout << "YES \n";
        else
            cout << "NO\n";
    }
}