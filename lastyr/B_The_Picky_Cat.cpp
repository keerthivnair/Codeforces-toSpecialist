#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int absVal = abs(ar[0]);
        vector<int> posCopy(n);
        vector<int> negCopy(n);
        posCopy = ar;
        posCopy[0]=abs(ar[0]);
        negCopy = ar;
        negCopy[0] = -posCopy[0];
        int medPos = (n-1)/2;
        int medEl = ar[0];
        sort(posCopy.begin(), posCopy.end());
        sort(negCopy.begin(), negCopy.end());
        int posCopyPos, negCopyPos;
        for (int i = 0; i < n; i++)
        {
            if (posCopy[i] == medEl)
                posCopyPos = i;
            if (negCopy[i] == medEl)
                negCopyPos = i;
        }
        int flag = 0;
        if (posCopyPos == medPos || negCopyPos == medPos)
        {
            cout << "YES" << endl;
            flag=1;
            continue;
        }
        else
        {
            if (posCopyPos > medPos)
            {
                int count = abs(medPos - posCopyPos);
                for (int i = posCopyPos - 1; i >= 0 && count; i--)
                {
                    if (abs(posCopy[i]) > absVal)
                    {
                        count--;
                    }
                }
                if (count == 0)
                {
                    cout << "YES" << endl;
                    flag=1;
                    continue;
                }
            }
            if (posCopyPos < medPos)
            {
                int count = abs(medPos - posCopyPos);
                for (int i = posCopyPos + 1; i < n &&count; i++)
                {
                    if (abs(posCopy[i]) > 0)
                        count--;
                }
                if(count==0) {
                    cout<<"YES"<<endl;
                    flag=1;
                    continue;
                }
            }
             if (negCopyPos > medPos)
            {
                int count = abs(medPos - negCopyPos);
                for (int i = negCopyPos - 1; i >= 0 && count; i--)
                {
                    if (abs(negCopy[i]) > 0)
                    {
                        count--;
                    }
                }
                if (count == 0)
                {
                    cout << "YES" << endl;
                    flag=1;
                    continue;
                }
            }
             if (negCopyPos < medPos)
            {
                int count = abs(medPos - negCopyPos);
                for (int i = negCopyPos + 1; i >= 0 && count; i--)
                {
                    if (abs(negCopy[i]) > absVal)
                    {
                        count--;
                    }
                }
                if (count == 0)
                {
                    cout << "YES" << endl;
                    flag=1;
                    continue;
                }
            }
            if(!flag) cout<<"NO"<<endl;
        }
    } 
    return 0;
}