#include <bits/stdc++.h>
using namespace std;

vector<int> dx = {1, -1, 1, -1};
vector<int> dy = {1, -1, -1, 1};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<pair<int, int>> st1, st2;
        int a, b, x1, y1, x2, y2;
        cin >> a >> b;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = 0; i < 4; i++)
        {
            st1.insert({x1 + dx[i] * a, y1 + dy[i] * b});
            st1.insert({x1 + dx[i] * b, y1 + dy[i] * a});
            st2.insert({x2 + dx[i] * b, y2 + dy[i] * a});
            st2.insert({x2 + dx[i] * a, y2 + dy[i] * b});
        }
        int ans = 0;
        for (auto &x : st1)
        {
            if (st2.find(x) != st2.end())
            {
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}