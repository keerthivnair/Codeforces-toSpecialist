#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >>n >>x;
        vector<char> a(n);
        for (auto &x : a)
            cin >> x;
        int start = -1;
        int stop = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                start = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == '1')
            {
                stop = i;
                break;
            }
        }
        if(start == -1) {
            cout <<"YES"<<'\n';
            continue;
        }
        if(abs(start-stop)+1 <= x) {
            cout <<"YES"<<'\n';
        }
        else {
            cout<<"NO"<<'\n';
        }
    }return 0;
}