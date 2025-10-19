#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int>a(n);
        set<int>st;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            st.insert(a[i]);
        }
        cout << st.size() <<'\n';

    }return 0;
}