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
        int in;
        set<int>s;
        for (int i = 0; i < n; i++)
        {
            cin >> in;
            s.insert(in);
        }
        int min,max;
        int count=0;
        for(auto el:s){
            if(count==0) min = el;
            if(count==n-1) max=el;
            count++;
        }
        cout << max-min<< endl;
    }
    return 0;
}