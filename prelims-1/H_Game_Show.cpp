#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >>n;
    vector<int>a(n);
    int sum = 0;
    int maxsum = 0;
    for(auto& x:a){
        cin >> x;
        sum+=x;
        maxsum=max(sum,maxsum);
    }
    cout << 100 + maxsum <<'\n';
    return 0;
}