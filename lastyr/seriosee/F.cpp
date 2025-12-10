#include <bits/stdc++.h>
using namespace std;

using ld = long double;

int main()
{
    string s;
    cin >> s;
    int n = s.size();

    vector<ld> dp(n + 1, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        ld c = 0, w = 0;

        for (int j = i; j < n; j++)
        {
            if (s[j] == 'C')
                c++;
            else
                w++;
            if (s[i] == 'C')
                dp[i] += w + dp[j + 1];
            else
                dp[i] += c + dp[j + 1];
        }
        dp[i] = dp[i] / (ld)(n - i);
    }
    cout << setprecision(16) << dp[0] << "\n";
}