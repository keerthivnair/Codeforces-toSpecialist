#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b; cin >> n>>a >>b;
    vector<double>e(n+1,0.0);
    vector<int>p(n+1,0.0);
    double window = 0.0;
    int L = b-a + 1;
    if(a>0){
        for(int i=1;i<=n;i++) {
           if(i-a>=0) window+=e[i-a];
           if(i-b-1>=0) window-=e[i-b-1];
           e[i]=1.0 + window/L;
        }
    }
    else {
     for(int i=1;i<=n;i++) {
           if(i-1>=0) window+=e[i-1];
           if(i-b-1>=0) window-=e[i-b-1];
           e[i] = (double)L / (L - 1) * (1.0 + window / L);
        }
    }
    cout << fixed << setprecision(5)<< e[n] <<'\n';
    return 0;
}