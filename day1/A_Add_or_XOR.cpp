#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll a, b, x, y;
        cin>>a>>b>>x>>y;
        if ((b-a) < -1 or 2*b <= a ) {
            cout<<-1<<endl;
            continue;
        }
        if(b-a == -1) {
            cout<<y<<endl;
            continue;
        }

        if(b==a) {
            cout<<0<<endl;
            continue;
        }
        if (a && 1) {
            if(x>y){
                int val = (a-b) /2;
                if((a-b)%2==1){
                 cout<< abs(x*(val +1) + y* val)<<endl;
                 continue;
                }
                else {
                   cout<<abs((x+y)*val) <<endl;
                }
            }
            else {
                cout<<abs(x*(a-b))<<endl;
                continue;
            }
        }
    }
}