#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> apples(n);
        for (int i = 0; i < n; i++)
        {
            cin >> apples[i];
        }

        sort(apples.begin(), apples.end());
        int maxApples = apples[n - 1];
        int minApples = apples[0];
        int turns_done = 0;

        
        if ((apples[n - 2] != apples[n - 1] && maxApples - minApples - 1 <= k) ||
            (apples[n - 2] == apples[n - 1] && maxApples - minApples <= k))
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum+=apples[i];
            }
            if(sum%2){
                cout<<"Tom"<<endl;
                continue;
            }
            else{
                cout<<"Jerry"<<endl;
            }
        }
        else
        {
            cout << "Jerry" << endl;
        }
    }
    return 0;
}
