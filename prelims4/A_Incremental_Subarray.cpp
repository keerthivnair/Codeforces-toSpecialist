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
        int n;
        int m;
        cin >> n >> m;
        vector<int>a(m);
        set<int>st;
        for(auto& x:a){
            cin >> x;
            st.insert(x);
        }
        vector<int>t=a;
        sort(t.begin(),t.end());
        if(st.size()!=m || t!=a) {
            cout << 1 <<'\n';
            continue;
        }
        else {
            cout << n-a[m-1]+1 <<'\n';
        }
    }
}