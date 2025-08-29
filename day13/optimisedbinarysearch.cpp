#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = -1;
    int z = 64;
    for (int b = z; b >= 1; b /= 2)
    {
        while (!ok(x + b) && (x + b) < z)
            x += b;
    }
    int k = x + 1;
    cout << k << endl;
    return 0;
}

So what this function does is that it finds a position in the array where the first true appears
after many false values all values from that point onwards to the right is true.
// kinda like the lower_bound val