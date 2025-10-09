#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<int, int> mpp;
        int c = count(s.begin(), s.end(), 'a') - count(s.begin(), s.end(), 'b');
        int ans = n;
        int sum = 0;
        mpp[0]= -1;
        for (int i = 0; i < n; i++)
        {
            sum += s[i] == 'a' ? 1 : -1;
            mpp[sum]=i;

            if(mpp.count(sum-c)) {
                ans = min(ans,i-mpp[sum-c]);
            }
        }
        if(ans == n) cout << -1;
        else cout << ans;
        cout << '\n';
    } return 0;
}