// Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> r(n);
        r[n - 1] = x;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == x)
                continue;
            else
            {
                r[count++] = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << r[i] << " ";
        }
        cout << endl;
    }
    return 0;
}