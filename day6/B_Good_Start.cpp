#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, a, b;
        cin >> w >> h >> a >> b;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if(x1==x2) {
            if((abs(y1-y2)%b == 0)) {
                cout <<"Yes"<<'\n';
                continue;
            }
            else {
                cout<<"No"<<'\n';
                continue;
            }
        }
        if(y1==y2) {
            if(abs(x1-x2)%a==0) {
                cout<<"Yes"<<'\n';
                continue;
            }
            else {
                cout<<"No"<<'\n';
                continue;
            }
        }

        if((abs(x1-x2)%a==0) || (abs(y1-y2)%b==0)) {
            cout<<"Yes"<<'\n';
        }
        else {
            cout <<"No"<<endl;
        }
    }
    return 0;
}
