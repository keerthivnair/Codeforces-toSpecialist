#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// there is logic issue
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll p1, p2, q1, q2;
        cin >> p1, p2, q1, q2;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll d = sqrt((p1 - q1) * (p1 - q1) + (p2 - q2) * (p2 - q2));
        ll maxval = 0;
        ll minval = 0;
        for (int i = 0; i < n; i++)
        {
            maxval += a[i];
        }
        if(d==0 and n==2 and a[0]!=a[1]){
            cout<<"no"<<endl;
            continue;
        }
        if(d<=maxval){
            cout<<"yes"<<endl;
            continue;
        }
        
    }
}