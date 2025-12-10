#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> h(n);
        for (auto &x : h)
            cin >> x;
        int curr = 1;
        k = k - 1;
        int starth;
        starth = h[k];
        if (starth < curr)
        {
            cout << "NO" << '\n';
            continue;
        }
        sort(h.begin(), h.end());
        if (starth == h[n - 1])
        {
            cout << "YES" << '\n';
            continue;
        }
        int flag = 0;
        while (true)
        {
            int lb = lower_bound(h.begin(), h.end(), starth+1) - h.begin();
            if (lb == n || (starth == h[n - 1]))
            {
                flag = 1;
                break;
            }
            if (((h[lb] - starth)-curr) > starth - curr)
            {
                break;
            }
            else
            {
                curr = curr + h[lb] - starth;
                starth = h[lb];
            }
        }
        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}