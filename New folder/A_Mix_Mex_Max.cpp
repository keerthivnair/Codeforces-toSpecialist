#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>a(n);
        int flag = 1;
        map<int,int>mpp;
        for(int i =0;i<n;i++) {
            cin >> a[i];
            if(a[i]==0) {
                flag = 0;
            }
            if(a[i]==-1) continue;
            mpp[a[i]]++;
            if(mpp.size()>1) {
                flag = 0;
            }
        }
        if(flag) cout <<"YES \n";
        else cout <<"NO \n";
        mpp.clear();
    } return 0;
}