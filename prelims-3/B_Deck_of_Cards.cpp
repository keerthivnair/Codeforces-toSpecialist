#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<char> a(n, '+');
        int i = 0, j = n - 1;

        string p;
        cin >> p;

        int maxleft = -1, maxright = -1;
        int f = 0; // flag when i>j
        int count2 = 0;
        int l;
        for (l = 0; l < k; l++)
        {

            if (i > j)
                f = 1;

            if (p[l] == '0')
            {
                if (i <= j && i < n)
                {
                    a[i] = '-';
                    if (i > 0 && a[i - 1] == '?')
                    {
                        swap(a[i], a[i - 1]);
                        maxleft = max(maxleft, i - 1);
                    }
                    i++;
                }
            }
            else if (p[l] == '1')
            {
                if (i <= j && j >= 0)
                {
                    a[j] = '-';
                    if (j < n - 1 && a[j + 1] == '?')
                    {
                        swap(a[j + 1], a[j]);
                        maxright = max(maxright, j + 1);
                    }
                    j--;
                }
            }
            else if (p[l] == '2')
            {
                count2++;
                if (i <= j)
                {
                    a[i] = '?';
                    if (i != j)
                        a[j] = '?';
                    maxleft = max(maxleft, i);
                    maxright = max(maxright, j);
                    i++;
                    j--;
                }

                // convert inner-most ? to - if f==1 and consecutive 2s
                if (f == 1 && count2 % 2 == 1 && maxleft != -1 && maxright != -1)
                {
                    if (maxleft >= 0 && maxleft < n)
                        a[maxleft] = '-';
                    if (maxright >= 0 && maxright < n)
                        a[maxright] = '-';
                }
            }

            // Reset i/j safely after exceeding
            if (i > j)
            {
                if (maxleft != -1)
                    i = maxleft;
                if (maxright != -1)
                    j = maxright;
            }
        }

        if ((count(a.begin(), a.end(), '?') == n && l < k - 1) || (k >= n))
        {
            for (int i = 0; i < n; i++)
                a[i] = '-';
        }

        for (auto &x : a)
            cout << x;
        cout << '\n';
    }

    return 0;
}
