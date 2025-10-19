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
        int minval = 0;
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mpp[a[i]]++;
            if (minval >= a[i])
            {
                minval=min(minval+1,a[i]);
                while (mpp.find(minval) != mpp.end())
                    minval++;
            }
        }
        cout << minval << '\n';
    }
    return 0;
}