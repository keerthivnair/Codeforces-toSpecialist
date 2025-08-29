#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s,r;
        cin>>s;
        r=s;
        reverse(r.begin(),r.end());
        if(s<r){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            set<char>set_char;
            for(int i=0;i<n;i++){
                set_char.insert(s[i]);
            }
            if(set_char.size()==1) {
                cout<<"NO"<<endl;
                continue;
            }
            else{
                if(k>=1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    } return 0;
}