#include <bits/stdc++.h>
using namespace std;

struct Player {
    int score = 0;
    long double totalRank = 0;
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, w;
    cin >> n >> w;
    vector<Player> players(n);

    map<int,int,greater<int>> count; // score -> #players
    map<int,long double> accumulated; // score -> accumulated rank*time
    map<int,int> lastUpdate;          // score -> last round updated

    count[0] = n;
    accumulated[0] = 0;
    lastUpdate[0] = 0;

    for(int round = 1; round <= w; round++) {
        int k; cin >> k;
        vector<int> pts(k);
        for(int i=0;i<k;i++){
            cin >> pts[i]; pts[i]--;
        }

        // update each player in order
        for(int p : pts){
            int oldScore = players[p].score;

            // finalize old group contribution
            accumulated[oldScore] += (long double)(round - lastUpdate[oldScore]) * count[oldScore];
            lastUpdate[oldScore] = round;

            players[p].totalRank += accumulated[oldScore];

            count[oldScore]--;
            if(count[oldScore]==0){
                accumulated.erase(oldScore);
                lastUpdate.erase(oldScore);
                count.erase(oldScore);
            }

            // move to new score
            int newScore = oldScore + 1;
            players[p].score = newScore;

            if(!count.count(newScore)){
                count[newScore] = 0;
                accumulated[newScore] = 0;
                lastUpdate[newScore] = round;
            }
            count[newScore]++;
        }
    }

    // finalize remaining contributions
    for(auto &[s,c] : count){
        accumulated[s] += (long double)(w - lastUpdate[s]) * c;
    }

    for(int i=0;i<n;i++){
        players[i].totalRank += accumulated[players[i].score];
    }

    cout << fixed << setprecision(9);
    for(int i=0;i<n;i++)
        cout << players[i].totalRank / w << "\n";
}
