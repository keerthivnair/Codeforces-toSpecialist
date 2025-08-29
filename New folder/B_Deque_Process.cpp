#include <bits/stdc++.h>
using namespace std;
int main() {  
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >>n;
        vector<int>a(n);
        for(auto& x:a) cin >> x;
        int i = 0;
        int j = n-1;
        int count = 1;
        while(i<=j && count<=n) {
if(count % 2 == 1) {
            
            if(max(a[i], a[j]) == a[i]) {
                cout << 'L';
                i++;
            }   
            else {
                cout << 'R';
                j--;
            }
        }
        else {
            if(min(a[i], a[j]) == a[i]) {
                cout << 'L';
                i++;
            }   
            else {
                cout << 'R';
                j--;
            }
        }
        count++;
    }
    cout <<'\n';
} return 0;
}