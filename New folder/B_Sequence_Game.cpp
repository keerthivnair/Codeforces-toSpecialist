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
        vector<int> r;
        r.push_back(a[0]);
        for (int i = 1; i < n; i++)
        {
            if (a[i] >= a[i - 1])
            {
                r.push_back(a[i]);
            }
            else
            {
                r.push_back(a[i]);
                r.push_back(a[i]);
            }
        }
        cout << r.size() << '\n';
        for (int i = 0; i < r.size(); i++)
        {
            cout << r[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}