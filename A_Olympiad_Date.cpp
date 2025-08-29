#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> cnt(6, 0);
        cnt[0]=3; cnt[1]=1; cnt[2]=2; cnt[3]=1; cnt[5]=1;
        vector<int> num(n);
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        if (n < 8) {
            cout << "0\n";
            continue;
        }

        int i = 0, count = 0;
        
        while ((cnt[0] > 0 || cnt[1] > 0 || cnt[2] > 0 || cnt[3] > 0 || cnt[5] > 0)
               && i < n) {
            int v = num[i];
            if (v==0||v==1||v==2||v==3||v==5) {
                cnt[v]--;
            }
            count++;
            i++;
        }
        
        if (cnt[0] <= 0 && cnt[1] <= 0 && cnt[2] <= 0 && cnt[3] <= 0 && cnt[5] <= 0)
            cout << count << "\n";
        else
            cout << "0\n";
    }
    return 0;
}
