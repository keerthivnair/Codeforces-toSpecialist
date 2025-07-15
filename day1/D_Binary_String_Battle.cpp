#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ones = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ones += 1;
            }
        }
        if (ones <= k)
        {
            cout << "Alice" << endl;
            continue;
        }
        else
        {
            if (ones >= k + 1 and n >= 2 * k)
            {
                cout << "Bob" << '\n';
            }
            else
            {
                cout << "Alice" << '\n';
            }
        }
    }
    return 0;
}