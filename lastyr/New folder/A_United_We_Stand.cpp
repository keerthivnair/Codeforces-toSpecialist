#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >>t;
    while(t--) {
        int n; cin >> n;
        vector<int>a(n);
        vector<int>b;
        vector<int>c;
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int ans = 0;
        if(a[0]==a[n-1]) {
            cout<<-1<<'\n';
            continue;
        }
        for(int i=n-1;i>=0;i--) {
            if(a[i]==a[n-1]) {
                c.push_back(a[i]);
            }
            else {
                b.push_back(a[i]);
            }
        }
        cout << b.size() << " " << c.size() << '\n';
        for(int i =0;i<b.size();i++) {
            cout<<b[i]<<" ";
        }
        cout << '\n';
        for(int i =0;i<c.size();i++) {
            cout<<c[i]<<" ";
        }
        cout << '\n';
    } return 0;
}