#include <bits/stdc++.h>
using namespace std;

int binary_search_fn(int low, int high, vector<int> &a, int b, int flag) {
    if (low >= high) return flag;

    int mid = (low + high) / 2;

    if (flag == 1) flag = binary_search_fn(low, mid, a, b, flag);
    if (flag == 1) flag = binary_search_fn(mid + 1, high, a, b, flag);

    if (mid + 1 < a.size()) {
        if (a[mid] > a[mid + 1]) {
            if ((b - a[mid]) < a[mid + 1] || a[mid] < (b - a[mid + 1])) {
                if ((b - a[mid]) < a[mid + 1]) {
                    a[mid] = b - a[mid];
                    return 1;
                } else {
                    a[mid + 1] = b - a[mid + 1];
                    return 1;
                }
            } 
            else if ((b - a[mid]) < (b - a[mid + 1])) {
                a[mid] = b - a[mid];
                a[mid + 1] = b - a[mid + 1];
                return 1;
            } 
            else {
                return -1;
            }
        }
    }

    return flag;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        int b;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> b;

        int flag = binary_search_fn(0, n - 1, a, b, 1);
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
