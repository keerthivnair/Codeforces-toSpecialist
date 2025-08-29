#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p(n);
        vector<int>q(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        for(int i=0;i<n;i++){
            cin>>q[i];
        }
        vector<int>maxArrayP(n);
        vector<int>minArrayP(n);
        vector<int>maxArrayQ(n);
        vector<int>minArrayQ(n);
        int maxNum=INT_MIN;
        int minNum=INT_MAX;
        for(int i=0;i<n;i++){
            maxNum=max(maxNum,p[i]);
            maxArrayP[i]=maxNum;
            minNum=min(minNum,p[i]);
            minArrayP[i]=minNum;
        }
        int maxNum=INT_MIN;
        int minNum=INT_MAX;
        for(int i=0;i<n;i++){
            maxNum=max(maxNum,q[i]);
            maxArrayQ[i]=maxNum;
            minNum=min(minNum,q[i]);
            minArrayQ[i]=minNum;
        }
        
    }
}