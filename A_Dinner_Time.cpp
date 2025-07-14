#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,p,q;
        cin>>n>>m>>p>>q;
        if(n%p !=0) {
            cout<<"YES"<<endl;
            continue;
        }
        else{
            if((q* n/p)==m){cout<<"YES"<<endl; continue;} 
            else{
                cout<<"NO"<<endl;
                continue;
            }
        }
    } return 0;
}