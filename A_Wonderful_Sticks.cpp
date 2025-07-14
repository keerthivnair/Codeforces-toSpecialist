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
        vector<int> r(n);
        string s;
        cin >> s;
        vector<bool> visited(n + 1, false);
        int start = 1;
        int end = n;

        for (int i = n - 2; i >= 0; i--)
        {
            if (s[i] == '<')
            {
                while (visited[start])
                    start++;
                r[i + 1] = start;
                visited[start] = true;
            }
            else if (s[i] == '>')
            {
                while (visited[end])
                    end--;
                r[i + 1] = end;
                visited[end] = true;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                r[0] = i;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << r[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
