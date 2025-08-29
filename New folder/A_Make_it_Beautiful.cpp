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
        vector<int> a(n);
        set<int> s;
        for (auto &x : a)
        {
            cin >> x;
            s.insert(x);
        }
        if (s.size() < 2)
        {
            cout << "NO" << '\n';
        }
        else
        {
            sort(a.begin(), a.end());
            int i = 0;
            int j = n - 1;
            int count = 1;
            cout <<"YES\n";
            while (i <= j)
            {
                if (count % 2 == 1) {
                    cout << a[j]<<' ';
                    j--;
                }
                else {
                    cout <<a[i]<<' ';
                    i++;
                }
                count++;
            }
            cout <<'\n';
        }
    } return 0;
}