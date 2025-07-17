# include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n,m;
    cin >> n >> m;
    vector<ll>p(n),h(m);

    for(auto& x:p) cin >> x;
    for(auto& x:h) cin >> x;

    multiset<ll> ms(p.begin(),p.end());

    for(int i=0;i<m;i++) {
        auto it = ms.upper_bound(h[i]);
        if(it == ms.begin()) {
           cout<<-1<<endl; 
        }
        else {
            --it;
            cout<<*it<<"\n";
            ms.erase(it);
        }
    }
    return 0;
}