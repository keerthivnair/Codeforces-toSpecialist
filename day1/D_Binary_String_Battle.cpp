#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        // store the position of the ones in
        // way such that the positions are in sorted order as they are converted into 0 if heap emty alice wins.
        // during alice's turn pop them like one from top one from bottom-a heap maybe ?
        // during bob's turn he goes thru each window of size k the max zeroes found then he converts to 1 and as zero to one is made push index pos to heap also. If all 1's then Bob wins.
    }
}