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
        for (auto &x : a)
            cin >> x;

        int flag = 1;

        
        for (int i = n - 1; i >= 1; i--)
        {
            if (abs(a[i] - a[i - 1]) <= 1)
            {
                flag = 0;
                break;
            }
        }

       
        if (flag != 0)
        {
            vector<int> temp = a;
            sort(temp.begin(), temp.end());

            if (temp == a) {
                flag = -1;
            } else {
                reverse(temp.begin(), temp.end());
                if (temp == a) {
                    flag = -1;
                }
            }
        }

        cout << flag << '\n';
    }

    return 0;
}
