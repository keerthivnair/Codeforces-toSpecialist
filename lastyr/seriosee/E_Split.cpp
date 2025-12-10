#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mpp[a[i]]++;
        }
        int fl = 1;
        for (auto &el : mpp)
        {
            if (el.second % k != 0)
            {
                fl = 0;
                break;
            }
            mpp[el.first] = el.second / k;
        }
        unordered_map<int, int> sec;
        int count = 0;
        int j = 0;
        for (int i = 0 && fl==0; i < n; i++)
        {
            sec[a[i]]++;
            while (j < i && sec[a[i]] > mpp[a[i]])
            {
                sec[a[j]]--;
                if (sec[a[j]] == 0)
                    sec.erase(a[j]);
                j++;
            }
            count += i-j+1;
        }
        if(fl) cout << count <<'\n';
        else cout << 0 <<'\n';
    }return 0;
}