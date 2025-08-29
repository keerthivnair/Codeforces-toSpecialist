#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt1,cnt2;
        cnt1 = cnt2 = 0;
        cin >> n;
        string a, b;
        cin >> a >> b;
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(a[i]=='0') cnt1++;
                if(b[i]=='0') cnt2++;
            }
            else{
                if(a[i]=='0') cnt2++;
                if(b[i]=='0') cnt1++;
            }
        }
        cout<<(cnt1 >= (n+1)/2 && cnt2 >= n/2?"YES":"NO")<<endl;
    }
    return 0;
}