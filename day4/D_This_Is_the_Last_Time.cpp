#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<tuple<int, int, int>> casinos(n);
        for (int i = 0; i < n; ++i) {
            int l, r, real;
            cin >> l >> r >> real;
            casinos[i] = {l, r, real};
        }

       
        sort(casinos.begin(), casinos.end());

        
        priority_queue<int> pq;

        int i = 0;
        while (true) { 
            while (i < n && get<0>(casinos[i]) <= k) {
                if (get<1>(casinos[i]) >= k) {
                    pq.push(get<2>(casinos[i]));
                }
                ++i;
            }

            bool moved = false;
            while (!pq.empty()) {
                int top = pq.top();
                pq.pop();
                if (top > k) {
                    k = top;
                    moved = true;
                    break;
                }
            }

            if (!moved) break; 
        }

        cout << k << '\n';
    }
    return 0;
}
