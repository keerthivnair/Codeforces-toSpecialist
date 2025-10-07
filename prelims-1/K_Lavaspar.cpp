#include <bits/stdc++.h>
using namespace std;

bool is_anagram(const string &a, const string &b) {
    string x = a, y = b;
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    return x == y;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m));
    vector<vector<int>> g(n, vector<int>(m, 0));
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> a[i][j];
    
    int w;
    cin >> w;
    
    while(w--) {
        string word;
        cin >> word;
        int len = word.size();
        vector<vector<bool>> used(n, vector<bool>(m, false)); 
        
        vector<pair<int,int>> dirs = {{0,1},{1,0},{1,1},{1,-1}};
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                for(auto [dx,dy] : dirs) {
                    string temp;
                    int k;
                    for(k=0;k<len;k++) {
                        int nx = i + k*dx;
                        int ny = j + k*dy;
                        if(nx<0||nx>=n||ny<0||ny>=m) break;
                        temp += a[nx][ny];
                    }
                    if(k==len && is_anagram(word,temp)) {
                        for(k=0;k<len;k++) {
                            int nx = i + k*dx;
                            int ny = j + k*dy;
                            if(!used[nx][ny]) {
                                g[nx][ny]++;
                                used[nx][ny] = true;
                            }
                        }
                    }
                }
            }
        }
    }
    
    int count = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(g[i][j]>1) count++;
    
    cout << count << "\n";
    return 0;
}
