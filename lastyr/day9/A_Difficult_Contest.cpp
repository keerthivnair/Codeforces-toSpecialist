#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.size();

        for (int i = n - 1; i >= 2; i--) {
           
            if (s[i - 2] == 'N' && s[i - 1] == 'T' && s[i] == 'T') {
                swap(s[i - 2], s[i - 1]);
                i -= 1; 
            }
            // Fix "FFT" -> "FTF"
            else if (s[i - 2] == 'F' && s[i - 1] == 'F' && s[i] == 'T') {
                swap(s[i - 1], s[i]);
                i -= 1; // Skip next 2 to avoid rechecking overlapping region
            }
        }

        cout << s << '\n';
    }
    return 0;
}
