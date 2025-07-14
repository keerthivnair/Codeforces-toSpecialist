#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int num = 0;
        for (char x : s)
        {
            num = num * 10 + ((0 ^ x) - 48);
        }

        if (sqrt(num) == floor(sqrt(num)))
        {
            cout << 0 << " " << sqrt(num) ;
        }
        else
        {
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}