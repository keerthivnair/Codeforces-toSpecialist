#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin >> n;

    if (n == "0")
    {
        cout << 1 << endl;
        return 0;
    }

    int len = n.size();
    int take = min(20, len);
    long double x = 0;
    for (int i = 0; i < take; i++)
        x = x * 10 + (n[i] - '0');
    long double log10n = log10l(x) + (len - take);
    long double res = log10n / log10l(6.0L);

    cout << (long long)floorl(res) + 1 << endl;
}
