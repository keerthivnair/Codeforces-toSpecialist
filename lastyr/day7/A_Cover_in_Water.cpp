#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (i >= 2 && s[i] == '.' && s[i - 1] == '.' && s[i - 2] == '.') {
                count = 2;
                break;
            }
            if (s[i] == '.') {
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}
