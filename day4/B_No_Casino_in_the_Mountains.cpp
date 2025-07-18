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
        int start = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0 && start == -1)
            {
                start = i;
            }
        }
        if (start == -1)
        {
            cout << 0 << endl;
            continue;
        }

        int hikes = 0;
        int count = 0;
        for (int i = start; i < n; i++)
        {
            if (a[i] == 0)
            {
                count++;
                if (count == k)
                {
                    hikes++;
                    count = 0; 
                    i++; 
                }
            }
            else
            {
                count = 0;
            }
        }
        cout << hikes << endl;
    }
    return 0;
}
