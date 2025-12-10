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
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (flag)
                break;
            for (int j = i + 1; j < n; j++)
            {
                if (__gcd(a[i], a[j]) <= 2)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag) cout << "Yes" <<'\n';
        else cout << "No\n";
    } return 0;
}