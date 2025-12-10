#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 2;
        int mc = 0;
        for (int i = 1; i < n; i++)
        {
            if((s[i]==s[i-1])) {
                c++;
            }
            else {
                c = 2;
            }
            mc = max(c,mc);
        }
        cout << max(mc,c)<<'\n';
    } return 0;
}