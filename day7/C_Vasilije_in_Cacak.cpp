#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;

        ll least_sum = k * (k + 1) / 2;
        ll total_sum = n * (n + 1) / 2;
        ll med = (n - k) * (n - k + 1) / 2;
        ll largest_sum = total_sum - med;

        if (least_sum <= x && x <= largest_sum)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
