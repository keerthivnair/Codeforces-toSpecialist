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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> b = a;
        for (int i = 0; i < n; i++)
        {
            b.push_back(a[i]);
        }
        map<int, deque<int>> mpp;
        int pref = 0;
        mpp[0].push_back(0);
        int maxlen = INT_MIN;
        for (int i = 1; i < 2 * n; i++)
        {
            pref ^= b[i - 1];
            if (mpp.find(pref) != mpp.end())
            {
                while (!mpp[pref].empty() && mpp[pref].front() < i - n)
                {
                    mpp[pref].pop_front();
                }
                if (!mpp[pref].empty())
                {
                    maxlen = max(maxlen, i - mpp[pref].front());
                }
            }
            mpp[pref].push_back(i);
        }
        cout << maxlen << "\n";
    }
    return 0;
}