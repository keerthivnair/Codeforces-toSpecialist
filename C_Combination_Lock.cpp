// Accepted


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
        if (n % 2 == 0)
            cout << "-1" << endl;
        else
        {
            for(int i=0;i<n;i++){
                r[i]=(2*i)%n +1;
            }
            for(int i=0;i<n;i++){
                cout<<r[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}