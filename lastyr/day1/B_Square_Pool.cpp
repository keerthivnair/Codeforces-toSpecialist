#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int c = 0;

        for (int i = 0; i < n; i++)
        {
            int dx, dy, x1, y1;
            cin >> dx >> dy >> x1 >> y1;

            
            int tx, ty;

            if (dx == 1 && dy == 1)
                tx = s, ty = s;
            else if (dx == -1 && dy == 1)
                tx = 0, ty = s;
            else if (dx == -1 && dy == -1)
                tx = 0, ty = 0;
            else if (dx == 1 && dy == -1)
                tx = s, ty = 0;
            else
                continue; 

           
            int vx = tx - x1;
            int vy = ty - y1;

           
            if (vx * dy == vy * dx && (vx * dx >= 0) && (vy * dy >= 0)) {
                c++;
            }
        }

        cout << c << '\n';
    }

    return 0;
}
