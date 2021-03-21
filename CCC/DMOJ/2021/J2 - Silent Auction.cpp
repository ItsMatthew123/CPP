#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, bid, max_bid = 0;
    string name, winner;
    map<string, int> bids;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> name >> bid;
        bids[name] = bid;
        if (bid > max_bid) {
            max_bid = bids[name];
            winner = name;
        }
    }

    cout << winner << endl;

    return 0;
}