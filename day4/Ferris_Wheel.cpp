#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main() {
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);
    for(auto& x:a) cin>>x;
    sort(a.begin(),a.end());
    ll i=0;
    ll j= n-1;
    ll count = 0;
    while(i<=j) {
        if((a[i]+a[j])<=x) {
            count+=1;
            i++;
            j--;
        }
        else {
            count++;
            j--;
        }
    }
    cout << count <<'\n';
    return 0;
}