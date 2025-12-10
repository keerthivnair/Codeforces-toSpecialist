#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<double> a(4);
    for (int i = 0; i < 4; i++) cin >> a[i];
    double t; cin >> t;

    sort(a.begin(), a.end());

    
    double sum = (a[0] + a[1] + a[2]) / 3.0;
    if (sum > t + 1e-9) { 
        cout << "impossible\n";
        return 0;
    }

    
    sum = (a[1] + a[2] + a[3]) / 3.0;
    if (sum <= t + 1e-9) {
        cout << "infinite\n";
        return 0;
    }

    
    sum = a[1] + a[2];         
    double required = 3.0 * t - sum;

    cout << fixed << setprecision(2) << required << '\n';
    return 0;
}
