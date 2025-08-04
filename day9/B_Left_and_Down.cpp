#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, k;
        cin >> a >> b >> k;
        
        if (k >= max(a, b))
        {
            cout << 1 << '\n';
            continue;
        }

        bool found = false;
        for (int i = 2; i <= k; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                found = true;
                break;
            }
        }

        if (found || a == b)
            cout << 1 << '\n';
        else{
           cout << 2 <<'\n';
        }

    }
    return 0;
}
