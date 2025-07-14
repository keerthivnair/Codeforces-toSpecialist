#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n,l,r,k;
        cin>>n>>l>>r>>k;
        if (n%2 == 1) {
            cout<<l<<endl;
            continue;
        }
        else {
            if (k<=n/2){
                cout<<l<<endl;
                continue;
            }
        }
    } return 0;
}