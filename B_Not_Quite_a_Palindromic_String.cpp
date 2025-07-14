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
        string ar;
        cin >> ar;
        int ones = 0;
        int zeroes = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == '1')
                ones++;
            else
            {
                zeroes++;
            }
        }
        int maxnum = max(ones, zeroes);
        int minnum = min(ones, zeroes);
        int count = 0;
        while (count < k)
        {
            maxnum = maxnum - 2;
            int temp = maxnum;
            maxnum = max(maxnum, minnum);
            minnum = min(temp, minnum);
            count += 1;
        }
        if (maxnum == minnum && maxnum >= 0 && count == k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}