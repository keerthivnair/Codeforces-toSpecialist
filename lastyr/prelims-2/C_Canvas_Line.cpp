#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int, int>> intervals(n);
    for (int i = 0; i < n; i++)
        cin >> intervals[i].first >> intervals[i].second;

    int m;
    cin >> m;
    vector<int> points(m);
    unordered_map<int, int> mpp;
    for (int i = 0; i < m; i++)
    {
        cin >> points[i];
        mpp[points[i]]++;
    }

    map<int, int> count;
    vector<int> res;
    
    

    for (int i = 0; i < n; i++)
    {
        int s = intervals[i].first, e = intervals[i].second;
        int L = lower_bound(points.begin(), points.end(), s) - points.begin();
        int R = upper_bound(points.begin(), points.end(), e) - points.begin();
        count[i] = R - L;
    }

    for (int i = 0; i < n; i++)
    {
        int c = 1;
        while (count[i] < 2)
        {
            if (i < n - 1 && count[i + 1] < 2 && intervals[i].second == intervals[i + 1].first && mpp[intervals[i].second] == 0)
            {
                res.push_back(intervals[i].second);
                count[i]++;
                count[i + 1]++;
                mpp[intervals[i].second]++;
            }
            else
            {
                if (mpp[intervals[i].first + c] == 0)
                {
                    res.push_back(intervals[i].first + c);
                    count[i]++;
                    c++;
                    mpp[intervals[i].first + c]++;
                }
            }
        }
    }
    for (auto &el : count)
    {
        if (el.second != 2)
        {
            cout << "impossible \n";
            return 0;
        }
    }
    cout << res.size() << "\n";
    for (int x : res)
        cout << x << " ";
    cout << "\n";

    return 0;
}
