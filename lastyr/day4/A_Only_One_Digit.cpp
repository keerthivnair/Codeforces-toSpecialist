#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int minno = INT_MAX;
        while (x)
        {
            int digit = x % 10;
            x=x/10;
            minno = min(digit, minno);
        }
        cout <<minno<<'\n';
    } return 0;
    
}