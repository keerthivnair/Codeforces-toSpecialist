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
        int n, k, l, r;
        cin >> n >> k >> l >> r;
        vector<int> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int count = 0;
        set<int> st;
        vector<int> pref(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            st.insert(a[i]);
            pref[i] = st.size();
            if(st.size()==k) {
                st.clear();
            }
        }
        for (int s = l; s <= r; s++)
        {
            for (int i = 1; i <= n; i++)
            {
                if (i < s)
                    continue;
                if ((pref[i] - pref[i - s - 1]) == k)
                    count++;
            }
        }
        cout << count << '\n';
    }
    return 0;
}