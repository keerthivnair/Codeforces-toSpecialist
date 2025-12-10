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
        for (auto &x : a)
            cin >> x;
        sort(a.begin(), a.end());
        int maxdiff = INT_MIN;
        for (int i = 1; i < n; i+=2)
        {
            maxdiff = max(maxdiff, a[i] - a[i - 1]);
        }
        cout << maxdiff << "\n";
    }
    return 0;
}