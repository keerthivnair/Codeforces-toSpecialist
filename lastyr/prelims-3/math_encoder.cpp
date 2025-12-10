#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

// Modular exponentiation
long long modpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

// Modular inverse using Fermat's little theorem
long long modinv(long long a) {
    return modpow(a, mod - 2);
}

int main() {
    freopen("/home/ubuntu/Codeforces/prelims-3/test_data/test_set_2/ts2_input.txt", "r", stdin);
    freopen("/home/ubuntu/Codeforces/prelims-3/test_data/test_set_2/ts2_MY_OUTPUT.txt", "w", stdout);

    long long T;
    cin >> T;
    for (int k = 1; k <= T; ++k) {
        long long K;
        cin >> K;
        vector<long long> vtr(K);
        for (int i = 0; i < K; ++i) cin >> vtr[i];
        sort(vtr.begin(), vtr.end());

        long long inv2K = modinv(modpow(2, K));  
        long long res = 0;

        // Nested loops (your original idea)
        for (int i = 0; i < K; ++i) {
            for (int j = i; j < K; ++j) {
                long long diff = (vtr[j] - vtr[i]) % mod;
                if (diff < 0) diff += mod;

                long long power = (j > i ? modpow(2, j - i - 1) : 1);  // 2^(j-i-1)
                long long term = diff * power % mod * inv2K % mod;
                res = (res + term) % mod;
            }
        }

        cout << "Case #" << k << ": " << res << "\n";
    }

    fclose(stdin);
    fclose(stdout);
    return 0;
}
