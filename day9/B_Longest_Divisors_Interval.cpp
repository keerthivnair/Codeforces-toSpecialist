#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll i = 1;
        ll count = 0;
        while (n)
        {
            if (n % i == 0)
            {
                count++;
            }
            else
            {
                break;
            }
            i++;
        }
        cout << count <<'\n';
    }
    return 0;
}