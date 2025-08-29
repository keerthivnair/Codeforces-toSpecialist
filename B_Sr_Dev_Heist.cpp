#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int flag = -1;
        int n;
        cin >> n;
        vector<int> ar(n);
        vector<int> min_first(n);
        vector<int> min_last(n);

        int min1 = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            min1 = min(min1, ar[i]);
            min_first[i] = min1;
        }

        int min2 = INT_MAX;
        for (int i = n - 1; i >= 0; i--) {
            min2 = min(min2, ar[i]);
            min_last[i] = min2;
        }

        for (int i = 1; i < n - 1; i++) {
            if (min_first[i - 1] < ar[i] && min_last[i + 1] < ar[i]) {
                flag = i;
                break;
            }
        }

        if (flag == -1) {
            cout << "NO" << endl;
        } else {
            int target_left = min_first[flag - 1];
            int target_right = min_last[flag + 1];

            int first_place = -1, last_place = -1;

            // Find left position
            for (int i = 0; i < flag; i++) {
                if (ar[i] == target_left) {
                    first_place = i;
                    break;
                }
            }

            // Find right position
            for (int i = flag + 1; i < n; i++) {
                if (ar[i] == target_right) {
                    last_place = i;
                    break;
                }
            }

            if (first_place != -1 && last_place != -1) {
                cout << "YES" << endl;
                cout << first_place + 1 << " " << flag + 1 << " " << last_place + 1 << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
