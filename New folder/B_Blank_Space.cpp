#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int count = 0;
        int maxcount = 0;
        for (auto &x : a)
            cin >> x;
        if (a[0] == 0)
            count++;
        maxcount = count;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == 0 && a[i - 1] == 0)
            {
                count++;
            }
            else
            {
                if (a[i] == 0)
                {
                    count = 1;
                }
                else
                {
                    count = 0;
                }
            }

            maxcount = max(maxcount, count);
        }
        cout << maxcount << '\n';
    }
    return 0;
}