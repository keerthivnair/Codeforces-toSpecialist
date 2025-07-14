#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();  
    while(t--){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        vector<char>res;
        
        while(ss>>word){
            res.push_back(tolower(word[0]));
        }
        for(char c :res){
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}