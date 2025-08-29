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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = 0;
        int j = n - 1;
        int maxel = a[0];
        int minel = a[0];
        int count = 0;
        while (i <= j)
        {
            minel = min(a[i], a[j]);
            if (count < 4 && maxel <= max(a[i], a[j]))
            {
                maxel = max(a[i], a[j]);
                count ++;
                if (maxel==a[j])
                cout << 'R';
                else {
                    cout << 'L';
                }
                j--;
            }
            else {
                if (minel==a[j])
                cout << 'R';
                else {
                    cout << 'L';
                }
                i++;
                maxel = INT_MIN;
                count = 0;
            }
        }
        cout << '\n';
    } return 0;
}