#include <bits/stdc++.h>
using namespace std;

// 

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n,m ; cin >> n >>m;
        vector<int>a(n);
        vector<int>b(m);
        for(auto & x:a) cin >> x;
        for(auto & x:b) cin >> x;
        set<int>s;
        
        for(int i=0;i<n;i++) {
            s.insert(a[i]);
        }

        int count = 0;

        for(int i=0;i<m;i++) {
            if(s.find(b[i])!=s.end()) {
                count ++;
            }
        }

        if(n<m) {
            count = 2*(n-count) + 1;
        }

        else {
            count = 2*(m-count);
        }

        cout << count <<'\n';
    
    } return 0;
}