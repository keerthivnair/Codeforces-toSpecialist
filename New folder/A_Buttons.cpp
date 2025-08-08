#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int a,b,c;
        cin >> a>>b>>c;
        if(c%2==0) {
            if(a<=b) {
                cout <<"Second\n";
            }
            else {
                cout <<"First\n";
            }
        }
        else {
            if(a+1<=b) {
                cout <<"Second\n";  
            }
            else {
                cout <<"First\n";
            }
        }
    } return 0;
}