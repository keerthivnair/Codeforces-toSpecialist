#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve() 
{
    int n; cin >> n;
    
    if (n == 0){
        cout << "YES\n";
        return;
    }
    
    vector <int> a;
    while (n > 0){
        a.push_back(n % 2);
        n /= 2;
    }
    
    // reverse(a.begin(), a.end());
    
    auto check = [&](vector <int> a){
        int m = a.size();
        for (int i = 0; i < m; i++){
            if (a[i] != a[m - 1 - i]){
                return false;
            }
        }
        
        if (m % 2 == 1 && a[m / 2] == 1){
            return false;
        }
        return true;
    };
    
    
    for (int i = 0; i < 31; i++){
        if (check(a)){
            cout << "YES\n";
            return;
        }
        a.push_back(0);
    }
    cout << "NO\n";
}

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);
    
    cin >> t;
    for(int i = 1; i <= t; i++) 
    {
        //cout << "Case #" << i << ": ";
        Solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}