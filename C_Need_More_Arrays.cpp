#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        int skip = 1;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll count = 1;
        for (ll i = 0; i < n; i += skip)
        {
            skip = 1;
            for (ll j = i + 1; j < n; j++)
            {
                if (arr[j] <= (arr[i] + 1))
                {
                    arr[j] = -1;
                    skip += 1;
                }
                else{
                    break;
                }
            }
        }
        ll count = 0;
        for (ll i = 0; i < n; i++)
        {
            (arr[i] != -1) ? count++ : count;
        }
        cout << count << endl;
    }
    return 0;
}