#include <bits/stdc++.h>
using namespace std;

long long countAtMostK(const vector<int> &a, int k, int l, int r)
{
    if (k == 0) return 0;
    int n = a.size();
    long long res = 0;
    int i = 0;
    unordered_map<int, int> freq;

    for (int j = 0; j < n; j++)
    {
        freq[a[j]]++;

        while ((int)freq.size() > k)
        {
            freq[a[i]]--;
            if (freq[a[i]] == 0)
                freq.erase(a[i]);
            i++;
        }

        int len = j - i + 1;

        if (len >= l)
            res += min(len, r) - l + 1;
    }

    return res;
}

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
        vector<int> a(n);
        for (auto &x : a) cin >> x;

        long long ans = countAtMostK(a, k, l, r) - countAtMostK(a, k - 1, l, r);
        cout << ans << '\n';
    }

    return 0;
}
