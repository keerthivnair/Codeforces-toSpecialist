#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int even;

        if (n % 2 == 1) {
            even = n / 2 + 1;
        } else {
            even = n / 2;
        }

        int odd = n - even;

        if (even == odd && n >= 4) {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }
    }
    return 0;
}
