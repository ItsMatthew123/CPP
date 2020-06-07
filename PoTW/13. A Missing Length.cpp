#include <bits/stdc++.h>

using namespace std;

int main() {
    int BF = 13;
    cout << "BF = " << BF << endl;

    int BD = 13;
    cout << "BD = " << BD << endl;

    int BE = 13;
    cout << "BE = " << BE << endl;

    int CE = 1;
    cout << "CE = " << CE << endl;

    int BC;
    BC = BE - CE;
    cout << "BC = " << BC << endl;

    int AD;
    AD = BC;
    cout << "AD = " << AD << endl;

    int AB;
    AB = BD * BD - AD * AD;
    AB = sqrt(AB);
    cout << "AB = " << AB << endl;

    int AF;
    AF = BF - AB;
    cout << "AF = " << AF << endl;

    return 0;

}