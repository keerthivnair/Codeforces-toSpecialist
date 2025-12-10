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
        {
            cin >> x;
        }
        vector<int> temp = a;
        sort(temp.begin(), temp.end());
        if (temp != a)
        {
            cout << 0 << endl;
            continue;
        }
        int mindis = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            mindis = min(mindis, abs(a[i] - a[i - 1]));
        }
        cout << mindis / 2 + 1 << '\n';
    }
    return 0;
}