#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int minel = INT_MAX;
    vector<int>a(n);
    for(auto& x:a){
        cin >> x;
        minel = min(abs(0-x),minel);
    }
    cout << minel<<'\n';
    return 0;
}
