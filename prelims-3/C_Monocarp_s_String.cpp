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
        string s;
        cin >> s;
        unordered_map<char, int> mpp;
        for (auto &x : s)
            mpp[x]++;
        if (mpp['a'] == mpp['b'])
        {
            cout << 0 << '\n';
            continue;
        }
        if (abs(mpp['a'] - mpp['b']) == n)
        {
            cout << -1 << "\n";
            continue;
        }
        
    }
}