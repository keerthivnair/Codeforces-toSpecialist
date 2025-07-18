#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> h(n);
        for (auto &x : h)
            cin >> x;

        int index = k - 1; 
        if (h[index] == *max_element(h.begin(), h.end()))
        {
            cout << "YES\n";
            continue;
        }

        vector<int> sh = h;
        sort(sh.begin(), sh.end());
        int currlevel = h[index];
        int time = 0;
        bool possible = false;

        while (true)
        {
            int lb = lower_bound(sh.begin(), sh.end(), currlevel + 1) - sh.begin();
            if (lb == n)
                break;

            int next = sh[lb];
            int teleport_time = next - currlevel;

            if (time + teleport_time > currlevel)
                break;

            time += teleport_time;
            currlevel = next;

            if (currlevel == sh[n - 1])
            {
                possible = true;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}
