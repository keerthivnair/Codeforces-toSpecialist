#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            cout << 0 << endl;
            continue;
        }

        int x = n + 1;
        int k = log2(x);

        if ((x & (x - 1)) == 0) // Check if x is power of 2
        {
            cout << (k - 1) * 2 + 3 << endl;
        }
        else
        {
            cout << (k - 1) * 2 + 5 << endl;
        }
    }
    return 0;
}
