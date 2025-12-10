#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin >> a[i];

    int s=1, e=n;
    
    while(s<n && a[s] <= a[s+1]) s++;
    
    if(s==n) {
        cout << "1 1\n";
        return 0;
    }
    e=s;
    
    while(s>1 && a[s]==a[s-1])s--;
    while(e<n && a[e] >= a[e+1]) e++;

    
    reverse(a.begin()+s, a.begin()+e+1);

    if(is_sorted(a.begin()+1, a.end()))
        cout << s << " " << e << "\n";
    else
        cout << "impossible\n";
}
