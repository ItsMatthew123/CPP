#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, x, y;
    char comma;
    cin >> N;
    vector<int> xxx;
    vector<int> yyy;
    
    for(int i = 0; i < N; i++) {
        cin >> x >> comma >> y;
        xxx.push_back(x);
        yyy.push_back(y);
    }

    sort(xxx.begin(), xxx.end());
    sort(yyy.begin(), yyy.end());

    cout << xxx.front() - 1 << comma << yyy.front() - 1 << endl;
    cout << xxx.back() + 1 << comma << yyy.back() + 1 << endl;
    
    return 0;
}