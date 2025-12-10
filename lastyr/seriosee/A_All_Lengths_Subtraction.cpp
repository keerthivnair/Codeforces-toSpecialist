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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0;
        int r = n - 1;
        int fl = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[l] == i)
                l++;
            else if  (a[r] == i)
                r--;
            else
            {
                fl = 1;
                break;
            }
        }
        if (fl==1)
            cout << "NO \n";
        else
            cout << "YES \n";
    }return 0;
}