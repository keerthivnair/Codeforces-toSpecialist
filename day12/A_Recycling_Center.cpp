#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll c;
        cin >> n >> c;
        multiset<ll,greater<ll>>st;
        vector<ll>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] <= c) {
                st.insert(a[i]);
            }
        }
         
    }
}