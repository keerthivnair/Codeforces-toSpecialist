#include <bits/stdc++.h>
using namespace std ;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        vector<pair<int,int>>ans;
        vector<int>a(n);
        vector<int>b(n);
        for(auto& x:a) cin>>x;
        for(auto& x:b) cin>>x;

        for(int i=0;i<n;i++) {
            for(int j=1;j<n;j++) {
                if(a[j-1] > a[j]) {
                    swap(a[j-1],a[j]);
                    ans.push_back({1,j});
                }
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=1;j<n;j++) {
                if(b[j-1] > b[j]) {
                    swap(b[j-1],b[j]);
                    ans.push_back({2,j});
                }
            }
        }

        for (int i=0;i<n;i++) {
            if(a[i] > b[i]) {
                swap(a[i],b[i]);
                ans.push_back({3,i+1});
            }
        }

        cout<<ans.size()<<'\n';
        for (auto& el:ans) {
            cout<<el.first<<' '<<el.second;
            cout<<endl;
        }
    } return 0;
}