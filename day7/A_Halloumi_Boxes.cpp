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
        if (k >= 2)
        {
            cout << "YES" << '\n';
            continue;
        }
        else
        {
            vector<int> t = a;
            sort(a.begin(), a.end());
            if (t != a)
            {
                cout << "NO" << "\n";
            }
            else
            {
                cout << "YES" << '\n';
            }
        }
    } return 0;
}