#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin>>n;
    vector<pair<ll,ll>>a(n);

    for(int i=0;i<n;i++) {
        cin>>a[i].first>>a[i].second;
    }
    vector<pair<int,int>>events;
    for(int i =0 ;i<n;i++) {
        events.push_back({a[i].first,1});
        events.push_back({a[i].second,-1});
    }
    sort(events.begin(),events.end());
    ll max_count = 0;
    ll count = 0;
    for (auto[time,type] : events) {
        count += type;
        max_count = max(max_count,count);
    }
    cout << max_count <<'\n';
    return 0;
}
