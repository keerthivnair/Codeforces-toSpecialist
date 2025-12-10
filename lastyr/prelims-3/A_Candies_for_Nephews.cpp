#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >>n;
        if(n%3==0) {
            cout << 0 <<"\n";
        }
        else {
            int t = n/3;
            cout << (t+1)* 3 - n <<'\n';
        }
    }
}