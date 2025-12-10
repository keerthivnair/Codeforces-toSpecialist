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
        int op = 0;
        int p = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                a[i] = 1;
                op++;
            }
            p *= a[i];
        }
        if (p < 0)
            op += 2;
        cout << op << '\n';
    }
    return 0;
}