#include <bits/stdc++.h>

using namespace std;

int main() {

    int a = 12539;
    int digit_1;
    int digit_10;
    int digit_100;
    int digit_1000;
    int digit_10000;

    digit_1 = a % 10;
    digit_10 = (a / 10) % 10;
    digit_100 = (a / 100) % 10;
    digit_1000 = (a / 1000) % 10;
    digit_10000 = (a / 10000) % 10;
    cout << "digit_1: " << digit_1 << endl;
    cout << "digit_10: " << digit_10 << endl;
    cout << "digit_100: " << digit_100 << endl;
    cout << "digit_1000: " << digit_1000 << endl;
    cout << "digit_10000: " << digit_10000 << endl;\
    
    int temp;
    temp = a / 9;
    cout << temp << endl;
    temp = temp * 9;
    cout << temp << endl;

        return 0;

}