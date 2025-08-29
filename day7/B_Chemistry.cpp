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
        string a;
        map<char, int> mpp;
        cin >> a;
        for (int i = 0; i < n; i++)
        {
            mpp[a[i]] += 1;
        }
        int count = 0;
        for (auto &x : mpp)
        {
            if (x.second % 2 == 1)
            {
                count += 1;
                if (count > k + 1)
                {
                    break;
                }
            }
        }
        if (count > k + 1)
            cout << "NO" << "\n";
        else
        {
            cout << "YES" << '\n';
        }
    }
    return 0;
}