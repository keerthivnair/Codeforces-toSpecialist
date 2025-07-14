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
        vector<int> p(n);
        int flag=1;
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            if(p[i]==0){
                flag=0;
            }
        }
        if(flag!=0){
            cout<<"YES"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(p[i]==0 ){
                    if((p[i-1]==0 && i>0)|| (i<n-1 &&p[i+1]==0)){
                        flag=1;
                        break;
                    }
                }
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    } return 0;
}