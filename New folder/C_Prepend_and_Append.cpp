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
        string s;
        cin >> s;
        int i = 0;
        int j = n - 1;
        int count = n;
        while (i <= j)
        {
            if ((s[i] == '1' && s[j] == '0') || (s[i] == '0' && s[j] == '1')) {
                count -= 2;
                i++;
                j--;
            }
            else {
                break;
            }
        }
        cout << count << '\n';
    }
    return 0;
}
