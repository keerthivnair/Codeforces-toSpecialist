#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int a = count(s.begin(), s.end(), '0');
        int b = count(s.begin(), s.end(), '1');
        int c = count(s.begin(), s.end(), '2');
        string r(n,'+');
        for(int i=0;i<n;i++) {
            if(i<a+c || i>=n-b-c) r[i]='?';
            if(i<a||i>=n-b||k==n) r[i]='-';
        }
        for(int i=0;i<n;i++) {
            cout << r[i];
        }
        cout <<'\n';
    }return 0;
}