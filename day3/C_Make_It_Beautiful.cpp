#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            int count = 0;
            while ((a[i] & (a[i] + 1)) && k)  // Fix: parentheses are important!
            {
                a[i] += 1;
                k -= 1;
                count += 1;
            }

            if (count == 0 && k != 0)
            {
                sort(a.begin(), a.end(), greater<int>());
                a[0] += 1;
                k -= 1;
            }
        }

        // Count total number of 1-bits in binary representation of all elements
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x = a[i];
            while (x)
            {
                sum += (x & 1);
                x >>= 1;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
