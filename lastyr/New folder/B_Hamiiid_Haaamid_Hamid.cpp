#include <bits/stdc++.h>
using namespace std;

int steps(string &s, int n, int x)
{
    int left = x - 1;
    while (left >= 0 && s[left] == '.')
    {
        left--;
    }
    left = left + 2;
    int right = x + 1;
    while (right < n && s[right] == '.')
    {
        right++;
    }
    right = n - right + 1;

    return (min(left, right));
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        int n, x;
        cin >> n >> x;
        x--;
        string s;
        cin >> s;
        string t = s;
        int pl = x + 1;
        int ans1 = 0, ans2 = 0;

        while (pl < n && s[pl] == '#')
            pl++;
        if (pl != n)
        {
            t[pl] = '#';
        }
        ans1 = steps(t, n, x);

        t = s;
        int pr = x - 1;
        while (pr >= 0 && s[pr] == '#')
            pr--;
        if (pr != -1)
        {
            t[pr] = '#';
        }
        ans2 = steps(t, n, x);

        cout << max(ans1, ans2) << endl;
    }
    return 0;
}