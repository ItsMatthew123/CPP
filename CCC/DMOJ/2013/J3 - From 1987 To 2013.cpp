#include <bits/stdc++.h>

using namespace std;

int main() {
    int input, output;
    set<int> digits;
    cin >> input;
    input = input + 1;
    output = input;

    while (true) {
        int counter = 0;
        digits.clear();
        while (input != 0) {
            digits.insert(input % 10);
            input /= 10;
            counter++;
        } 
        if (counter == int(digits.size())) {
            input = output;
            cout << input;
            return 0;
        } else {
            input = output;
            input++;
            output++;
        }
    }
    
    return 0;
}