#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> samosa(n);
        for (int i = 0; i < n; i++)
        {
            cin >> samosa[i];
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (samosa[i] == 1)
                cnt++;
            else
                break;
        }

        if (cnt == n)
        {
            
            if (n % 2 == 0)
                cout << "Second" << endl;
            else
                cout << "First" << endl;
        }
        else
        {
            if (cnt % 2 == 0)
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        }
    }
    return 0;
}
