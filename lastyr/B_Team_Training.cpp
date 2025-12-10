#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> str(n);
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        int mt = 0;
        sort(str.begin(), str.end(), greater<int>());
        int i;
        for (i = 0; i < n; i++)
        {
            if (str[i] >= x)
                mt++;
            else
            {
                break;
            }
        }
        if (i == n - 1)
        {
            cout << mt << endl;
            continue;
        }
        else
        {
            int count;
            for (int j = i; j < n; j += count)
            {
                count = 1;
                int minm=str[j];
                while (min(minm,str[j+count-1])* count < x)
                    count++;
                if (count <= n - j)
                    mt++;
                else
                {
                    break;
                }
            }
            cout << mt << endl;
        }
    }
    return 0;
}