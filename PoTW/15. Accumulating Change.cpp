#include <bits/stdc++.h>

using namespace std;

int main() {
    int qty_toonies = 56;
    cout << "qty_toonies = " << qty_toonies << endl;

    int qty_loonies;
    qty_loonies = qty_toonies/7*3;
    cout << "qty_loonies = " << qty_loonies << endl;

    int qty_quarters;
    qty_quarters = qty_toonies/7*5;
    cout << "qty_quarters = " << qty_quarters << endl;

    int qty_coins;
    qty_coins = qty_toonies + qty_loonies + qty_quarters;
    cout << "qty_coins = " << qty_coins << endl;

    int value_toonies;
    value_toonies = qty_toonies*2;
    cout << "value_toonies = " << value_toonies << endl;

    int value_loonies;
    value_loonies = qty_loonies*1;
    cout << "value_loonies = " << value_loonies << endl;

    int value_quarters;
    value_quarters = qty_quarters*0.25;
    cout << "value_quarters = " << value_quarters << endl;

    int total_value;
    total_value = value_toonies + value_loonies + value_quarters;
    cout << "total_value = " << total_value << endl;

    return 0;
}
