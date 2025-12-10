#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        map<char, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[s[i]]++;
        }
        int t_len = 0;
        for (int i = 0; i < n; i++)
        {
            char c;
            if (s[i] == '1')
                c = '0';
            else
            {
                c = '1';
            }
            if (mpp[c] < 1)
            {
                break;
            }
            else
            {
                mpp[c]--;
                t_len++;
            }
        }
        cout << n - t_len << '\n';
    }
    return 0;
}