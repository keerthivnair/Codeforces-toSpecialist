#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (true)
    {
        string line;
        getline(cin, line);
        if (line.empty())
            break;
        stringstream ss(line);
        vector<string> words;
        string word;

        while (ss >> word)
        {
            words.push_back(word);
        }
        deque<pair<char, string>> q;
        for (auto &w : words)
        {
            int fl = 1;
            if (w.size() < 2)
                fl = 0;
            for (int i = 0; i < w.size() && fl != 0; i++)
            {
                if ((i == 0 && !isupper(w[0])) || (i > 0 && !islower(w[i])))
                {
                    fl = 0;
                    break;
                }
            }
            if (fl != 0)
            {
                q.push_back({w[0], w});
            }
            else
            {
                if (q.size() >= 2)
                {
                    for (auto &x : q)
                    {
                        cout << x.first;
                    }
                    if (!q.empty())
                    {
                        cout << " (";
                    }
                    fl = 1;
                }

                while (!q.empty())
                {
                    string s = q[0].second;
                    q.pop_front();
                    if (q.size() >= 1)
                        cout << s << " ";
                    else
                        cout << s << ' ';
                }
                if (fl == 1)
                    cout << ") ";
                cout << w << " ";
            }
        }
    }
}