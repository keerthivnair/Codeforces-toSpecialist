#include <bits/stdc++.h>
using namespace std;

vector<int> prime_factorize(int n) {
    vector<int> factors;
    for (int i = 2; i*i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) factors.push_back(n);
    return factors;
}

int main() {
    int m, n, k; 
    cin >> m >> n >> k;

    vector<int> M(m);
    vector<int> N(n);

    for (auto &x : N) cin >> x;

    vector<vector<int>> e(m+1, vector<int>(m+1)); 
    for (int i = 0; i < k; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        e[x][y] = z; 
    }

    set<int> s;

    for (int i = 0; i < n; i++) {
        vector<int> r = prime_factorize(N[i]);
        for (auto &x : r) s.insert(x);
    }

    int c = 0;
    for (auto &x : s) {
        c++;
        cout << x << ' ';
        if (c == m) {
            cout << '\n';
            break;
        }
    }
}
