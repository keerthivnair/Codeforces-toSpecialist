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
        vector<int> a(n);
        int count = 0;
        for (auto &x : a)
        {
            cin >> x;
            if (x == 2)
                count++;
        }
        if (count % 2 == 1)
        {
            cout << -1 << '\n';
            continue;
        }
        else
        {
            int h = count / 2;
            for (int i = 0; i < n-1; i++)
            {

                if (a[i] == 2)
                {
                    h--;
                }
                
                if (h == 0)
                {
                    cout << i + 1 << '\n';
                    break;
                }
            }
        }
    }
}