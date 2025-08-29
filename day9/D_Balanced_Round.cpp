#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        sort(a.begin(), a.end());
        int count = 1;
        int maxcount = 1;
        for (int i = 1; i < n; i++)
        {
            if ((a[i] - a[i - 1]) > k)
            {
                count = 1;
            }
            else
            {
                count ++;
                maxcount = max(maxcount, count);
            }
        }
        cout << n - maxcount << '\n';
    }
    return 0;
}