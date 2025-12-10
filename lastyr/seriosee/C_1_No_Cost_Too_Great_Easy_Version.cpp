// sieve of erathothanes method for prime no factorisation
// the concept is that if u want to find the prime factors of every number upto N this is from 2 to N
// take a vector of vector with size n+1 size.
// demo down check it out

#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;

vector<vector<int>> prime(N + 1);
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 2; i <= N; i++)
    {
        if (!prime[i].empty())
            continue;
        for (int j = i; j <= N; j += i)
        {
            prime[j].push_back(i);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;

        unordered_map<int, int> count;
        int ans = 2;
        for (int i = 0; i < n; i++)
        {
            for (auto &x : prime[a[i]])
            {
                if (count[x] > 0)
                    ans = 0;
                count[x]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (auto &x : prime[a[i]])
                count[x]--;

            for (auto &x : prime[a[i] + 1])
            {
                if (count[x] > 0)
                    ans = min(ans, 1);
            }

            for (auto &x : prime[a[i]])
                count[x]++;
        }

        cout << ans << '\n';
    }
    return 0;
}