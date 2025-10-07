#include <bits/stdc++.h>
using namespace std;
struct Word
{
    char key;
    string full;
};

bool isCapitalized(string w)
{
    if (w.size() < 2)
        return false;
    if (!isupper(w[0]))
        return false;
    for (int i = 1; i < w.size(); i++)
    {
        if (!islower(w[i]))
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string sentence;
    while (getline(cin, sentence))
    {
        stringstream ss(sentence);
        string w;
        vector<Word> caps;
        while (ss >> w)
        {
            if (isCapitalized(w))
            {
                caps.push_back({w[0], w});
            }
            else
            {
                if (!caps.empty())
                {
                    if (caps.size() < 2)
                    {
                        for (int i = 0; i < caps.size(); i++)
                        {
                            cout << caps[i].full<<' ';
                            caps.clear();
                            continue;
                        }
                    }
                    else
                    {
                        for (auto &cw : caps)
                            cout << cw.key;
                        cout << " (";
                        for (int i = 0; i < caps.size(); i++)
                        {
                            cout << caps[i].full;
                            if (i + 1 != caps.size())
                            {
                                cout << " ";
                            }
                        }
                        cout << ") ";
                        caps.clear();
                    }
                }
                cout << w << ' ';
            }
        }
        if (!caps.empty())
        {
            for (auto &cw : caps)
                cout << cw.key;
            cout << " (";
            for (size_t i = 0; i < caps.size(); i++)
            {
                cout << caps[i].full;
                if (i + 1 < caps.size())
                    cout << " ";
            }
            cout << ") ";
        }
        cout << "\n";
    }
}