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

        ll s = sqrt(n);
        ll count = 0;
        int flag = 0;

       
        while (s <= n && n % s == 0)
        {
            flag = 1;
            count++;
            s++;
        }

        
        s = sqrt(n) - 1;
        while (s > 0 && n % s == 0)
        {
            flag = 1;
            count++;
            s--;
        }

        if (!flag)
            cout << 1 << '\n';
        else
            cout << count << '\n';
    }
    return 0;
}
