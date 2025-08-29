#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b_max;
        cin>>n>>b_max;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (b[i] < -1 || b[i] > b_max)
            {
                flag = 0;
                break;
            }
            maxi = max(maxi, a[i]);
            mini = min(a[i], mini);
        }
        int maxSum;
        int minSum; 
        maxSum=max(mini + b_max, maxi + 0);
        minSum=min(mini + b_max, maxi + 0);
        int foundSum = 0;
        int sum = -2;
        for (int i = 0; i < n; i++)
        {
            if (b[i] != -1 && !foundSum)
            {
                sum = a[i] + b[i];
                foundSum = 1;
            }
            if (b[i] != -1 && foundSum)
            {
                if ((a[i] + b[i]) != sum || ((a[i] + b[i]) > maxSum || (a[i] + b[i]) < minSum))
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (!flag)
        {
            cout << 0 << endl;
            continue;
        }
        if (!foundSum)
        {
            cout << maxSum - minSum +1<< endl;
            continue;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}