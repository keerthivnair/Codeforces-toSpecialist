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
        int n, k;
        cin >> n >> k;

        long long t_val = 1LL * n * n - k;
        

        vector<vector<char>> a(n, vector<char>(n, '.'));

        if (k <= n * n && t_val!=1)
        {
            cout << "YES\n";
            
            int filled = 0;
            for (int i = 0; i < n && filled < k; i++)
            {
                for (int j = 0; j < n && filled < k; j++)
                {
                    a[i][j] = 'U';
                    filled++;
                }
            }

            
            for (int i = 0; i < n; i++)
            {
                int f = 0;
                for (int j = 0; j < n; j++)
                {
                    if (i == n - 1)
                    {
                        if (a[i][j] == '.')
                        {
                            if (f==0){
                                 a[i][j] = 'R';
                                 f=1;
                            }
                               
                            else
                                a[i][j] = 'L';
                        }
                    }
                    else {
                        if (a[i][j] == '.')
                        a[i][j]='D';
                    }
                }
            }

            
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << a[i][j];
                }
                cout << '\n';
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
