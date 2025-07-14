#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin >> n;
        vector<pair<int, int>> people(n); // {position, position + distance}

        for (int i = 0; i < n; i++)
        {
            int x, d;
            cin >> x >> d;
            people[i] = {x, x + d};
        }

        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            int from = people[i].first;
            int to = people[i].second;

            for (int j = 0; j < n; j++)
            {
                if (i == j) continue;
                if (people[j].first == to && people[j].second == from)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag) break;
        }

        cout << (flag ? "YES" : "NO") << endl;

    return 0;
}
