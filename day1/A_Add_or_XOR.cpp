#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll a, b, x, y;
        cin>>a>>b>>x>>y;
        if ((b<a)|| a^1 != b ) {
            cout<<-1<<endl;
            continue;
        }
        if(b<a && a^1==b) {
            cout<<y<<endl;
            continue;
        }

        if (a%2==1) {
            if(x>y){
                ll val = (b-a) /2;
                if((b-a)%2==1){
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
        else {
              if(x>y){
                int val = (b-a) /2;
                if((b-a)%2==1){
                 cout<< abs(x*(val) + y* (val+1))<<endl;
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
    } return 0;
}