#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    set<pair<int,int>>s;
    vector<vector<int>>a(n+1,vector<int>(5,-1));
    int b = 1;
    for(int i=1;i<=n;i++) {
cin >> a[i][1] >> a[i][2] >> a[i][3] >> a[i][4];
if(a[i][1]==0) {
    for(int j=0;j<a[i][2] && b==1;j++) {
        if(s.find({a[i][3],a[i][4]+j})==s.end() && (a[i][4]+j)<=10) {
           s.insert({a[i][3],a[i][4]+j});
        }
        else {
            b=0;
        }
    }
}
else {
    for(int j=0;j<a[i][2]&& b==1;j++) {
        if(s.find({a[i][3]+j,a[i][4]})==s.end() && (a[i][3]+j)<=10) {
           s.insert({a[i][3]+j,a[i][4]});
        }
        else {
            b=0;
        }
    }
}
    }
    if(b==0) {
        cout <<"N \n";
    }
    else cout <<"Y \n";
}