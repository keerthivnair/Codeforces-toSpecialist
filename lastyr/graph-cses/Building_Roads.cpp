#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>> &path, int start,vector<bool> &visited)
{
    if (visited[start])
        return 0;
    visited[start] = true;
    stack<int> st;
    st.push(start);
    visited[start] = true;

    while (!st.empty())
    {
        int i = st.top();
        st.pop();
        for (auto x : path[i])
        {
            if (!visited[x])
            {
                visited[x] = true;
                st.push(x);
            }
        }
    }
    return 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> path(n);
    for (int i = 0; i < m; i++)
    {
        int s, e;
        cin >> s >> e;
        path[s - 1].push_back(e - 1);
        path[e - 1].push_back(s - 1);
    }
    int c = 0;
    vector<bool> visited(n, false);
    vector<int>r;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            r.push_back(i);
            c+=dfs(path, i, visited);
        }
    }
    
    cout << c-1 << '\n';
    for(int i=1;i<r.size();i++) {
        cout << r[i-1]+1 <<' '<<r[i]+1;
        cout <<'\n';
    }
    return 0;
}