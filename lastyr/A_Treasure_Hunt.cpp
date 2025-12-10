#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;

inline ll read() {
    ll s = 0, w = 1;
    char ch = getchar();
    while (ch > '9' || ch < '0') {
        if (ch == '-') w = -1;
        ch = getchar();
    }
    while (ch <= '9' && ch >= '0') {
        s = (s << 1) + (s << 3) + (ch ^ 48); // s = s * 10 + (ch - '0')
        ch = getchar();
    }
    return s * w;
}

int main() {
    ll t = read();
    while (t--) {
        ll x = read();
        ll y = read();
        ll a = read();

        double yval = a + 0.5;

        double total = x + y;
        double quotient = floor(yval / total);
        double remainder = yval - quotient * total;

        if (remainder > x) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
