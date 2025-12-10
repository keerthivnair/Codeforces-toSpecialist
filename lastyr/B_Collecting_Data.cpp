#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    int l=0;
    int r = 0;
    int c = 0;
    int l_w=0,r_w=0;
    for(int i=0;i<n;i++) {
      if(s[i]=='S') {
        if(c==0)l+=1;
        else r+=1;
      }
      else {
        c=abs(c-1);
        if(c==0)l+=1;
        else r+=1;
      }
      if(s[i]=='Q') {
        if(r>l) {
            if(r==10 || r>=l-2) {
                r_w+=1;
                if(r_w>=2) {
                    cout << l_w << ' - ' << r_w <<" (winner)\n"; 
                }
                else {
                 cout << l_w<<" ("<<l<<")" << ' - ' << r_w <<" ("<<r<<"*)\n";    
                }
            }
            else {

            }
        }
      }
}