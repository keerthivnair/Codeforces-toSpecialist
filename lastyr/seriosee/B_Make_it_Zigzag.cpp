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
        vector<long long> a(n);
        for (auto &x : a)
            cin >> x;

        long long count = 0;
        long long maxel = a[0];
        for (int i = 0; i < n; i++)
        {
            maxel = max(maxel, a[i]);
            if (i % 2 == 1)
            {

                a[i] = maxel;
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (i % 2 == 1)
            {
                if (a[i] <= a[i + 1])
                {
                    count += a[i + 1] - a[i] + 1;
                }

                a[i + 1] = a[i] - 1;
            }
        }

        a[n - 1] = max(maxel, a[n - 1]);
        for (int i = 0; i < n - 1; i += 2)
        {
            if (a[i] == a[i + 1])
                count++;
            a[i] = a[i + 1] - 1;
        }

        cout << count << '\n';
    }

    return 0;
}
