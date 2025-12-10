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
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> a(n + 1, {0, 0});
        int points = 00;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i].first >> a[i].second;
            int diff = a[i].first - a[i - 1].first;
            if (diff % 2 == 0)
            {
                if (a[i - 1].second == a[i].second)
                    points += diff;
                else
                {
                    points += diff - 1;
                }
            }
            else {
                if (a[i - 1].second == a[i].second)
                    points += diff-1;
                else
                {
                    points += diff ;
                }
            }
        }
        points += abs(a[n].first-m);
        cout << points <<'\n';
    }return 0;
}