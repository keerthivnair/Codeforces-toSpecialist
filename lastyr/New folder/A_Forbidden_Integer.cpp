#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES\n";
            cout <<n<<'\n'; 
            for(int i=1;i<=n;i++) {
                cout <<1<<' ';
            }
            cout <<'\n'; 
            continue;
        }
        else
        {
            if (x == 1 && n % 2 == 0 && k>= 2)
            {
                cout << "YES\n";
                cout << n/2 <<'\n';
                for(int i=1;i<=n/2;i++) {
                    cout <<2<<' ';
                }
                cout <<'\n'; 
                continue;
            }
            else {
                if(x==1 && n%2==1) {
                    if(n>k+k) {
                        cout <<"NO \n";
                        continue;
                    }
                    else {
                        cout <<"YES\n";
                        cout << 2 <<'\n';
                        cout <<k<<' '<<k-1<<'\n';
                    
                        continue;}
                }
            }
        }
        cout << "NO\n";
    } return 0;
}