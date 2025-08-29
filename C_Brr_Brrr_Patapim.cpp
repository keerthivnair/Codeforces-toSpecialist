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
        vector<int> r(2*n+1, 0);
        vector<bool>place(2*n+1,false);
        vector<bool>el(2*n+1,false);
        vector<vector<int>> grid(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if(!r[i+j+1]){
                    int k=grid[i][j];
                    r[i+j+1]=grid[i][j];
                    el[k]=true;
                    place[i+j+1]=true;
                }
            }
        }
        int x;
        for(int i=1;i<2*n+1;i++){
            if(!el[i]){
                x=i;
            }
        }
        r[0]=x;
        for(int i=0;i<2*n;i++){
            cout<<r[i]<<" ";
        }
        cout<<endl;
    }
}