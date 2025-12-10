#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    int l_p = 0;
    int r_p = 0;
    int l_w = 0;
    int r_w = 0;
    int c = 0;
    for(auto& x:s) {
        if(x=='R') {
            c = abs(1-c);
            if(c==0) {
                l_p++;
            }
            else {
                r_p++;
            }
        }
        else if(x=='S') {
            if(c==0) {
                l_p++;
            }
            else {
                r_p++;
            }
        }
        if((abs(l_p-r_p)>=2 && (l_p>=5 || r_p>=5)) || l_p==10 || r_p==10) {
            if(l_p>r_p){
                l_w++;
                c=0;
            }
            else {
                r_w++;
                c=1;
            }
            l_p=0;
            r_p=0;
        }
        if(x=='Q') {
            if(l_w>=2 || r_w>=2) {
                if(l_w>=2) {
                    cout << l_w<<" (winner) - "<<r_w<<"\n";
                    c=0;
                }
                else {
                    cout << l_w <<" - "<<r_w<<" (winner)\n";
                    c=1;
                }
            }
            else {
                if(c==0) {
cout << l_w <<" ("<<l_p<<"*)"<<" - "<<r_w<<" ("<<r_p<<")\n";
                }
                else {
cout << l_w <<" ("<<l_p<<")"<<" - "<<r_w<<" ("<<r_p<<"*)\n";
                }
            }
        }
    }
}