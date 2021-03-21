#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, spaces_occupied = 0;
    string yesterday, today;
    cin >> N >> yesterday >> today;
    bitset <100> parking_yesterday;
    bitset <100> parking_today;
    
    for(int i = 0; i < N; i++) {
        if (yesterday[i] == 'C')
            parking_yesterday[i] = 1;
        if (today[i] == 'C')
            parking_today[i] = 1;
    }

    for(int j = 0; j < N; j++) {
        // if (parking_yesterday[j] == 1 && parking_today[j] == 1)
        //     spaces_occupied++;
        if (parking_yesterday[j] & parking_today[j])
            spaces_occupied++;
    }

    cout << spaces_occupied << endl;
    
    return 0;
}