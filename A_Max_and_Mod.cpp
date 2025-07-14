#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0 || n<=1) {
            cout<<"-1"<<endl;
            continue;
        }
        else{
            for(int i=0;i<n;i++){
                if(i==0) cout<<n<<" ";
                else cout<<i<<" ";
            } cout<<endl;
        }
    }return 0;
}