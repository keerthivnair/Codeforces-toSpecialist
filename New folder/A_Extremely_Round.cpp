#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
    int count = 0;
    while (n > 0) {
        int r = n % 10;
        if (r > 0) count++;
        if (count > 1) return false;
        n /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    const int MAXN = 1000000; 
    vector<int> pref(MAXN + 1, 0);

    
    for (int i = 1; i <= MAXN; i++) {
        pref[i] = pref[i - 1] + (check(i) ? 1 : 0);
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << pref[n] << '\n';
    }
    return 0;
}
