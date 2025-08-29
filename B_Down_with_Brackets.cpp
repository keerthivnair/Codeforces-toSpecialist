#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag = 0;
        int n = s.size();
        stack<char> st;
        st.push('(');
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] == '(')
                st.push(s[i]);
            if (s[i] == ')')
            {
                if (st.top() == '(')
                {
                    st.pop();
                }
            }
            if (st.size() == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag==1)
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}