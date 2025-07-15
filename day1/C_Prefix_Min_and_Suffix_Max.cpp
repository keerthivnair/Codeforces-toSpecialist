#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for (int i=0;i<n;i++) {
            cin>>a[i];
        }
        vector<int>prefix(n);
        vector<int>suffix(n);
        int min_el=a[0];
        int max_el=a[n-1];
        prefix[0]=min_el;
        suffix[n-1]=max_el;
        for (int i=1;i<n;i++) {
            min_el=min(min_el,a[i]);
            prefix[i]=min_el;
        }
        for (int i=n-2;i>=0;i--) {
            max_el=max(max_el,a[i]);
            suffix[i]=max_el;
        }
        vector<int>res(n);
        res[0]=1;
        res[n-1]=1;
        for (int i=1;i<n-1;i++) {
            if(a[i]==prefix[i] or a[i]==suffix[i]) {
                res[i]=1;
            }
            else {
                res[i]=0;
            }
        }
        for (int i=0;i<n;i++) {
            cout<<res[i];
        }
        cout<<endl;
    } return 0;
}