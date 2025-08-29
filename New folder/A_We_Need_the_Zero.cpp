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
        int xxor = 0;
        for (auto &x : a)
        {
            cin >> x;
            xxor ^= x;
        }

        if (n % 2 == 0 && xxor != 0)
        {
            cout << -1 << '\n';
            continue;
        }
        else {
            cout << xxor << '\n';
        }
    } return 0;
}