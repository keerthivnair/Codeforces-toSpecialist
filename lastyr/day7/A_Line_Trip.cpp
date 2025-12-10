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
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        int curr = 0;
        int maxval = 0;
        for (int i = 0; i < n; i++)
        {
            maxval = max(maxval, abs(curr - a[i]));
            curr = a[i];
        }
        maxval = max(maxval, 2 * abs(x - a[n - 1]));
        cout << maxval << '\n';
    }
    return 0;
}