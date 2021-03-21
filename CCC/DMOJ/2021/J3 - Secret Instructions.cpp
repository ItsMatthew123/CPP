#include <bits/stdc++.h>

using namespace std;

int main() {
    int number, direction_digits, steps;
    string direction;

    do {cin >> number;
        if (number == 99999)
            break;
        direction_digits = floor(number / 1000);
        if ((direction_digits % 10 + direction_digits / 10) % 2 == 0)
            direction = "right";
        // else if (direction_digits == 0)
        //     direction = "";
        else 
            direction = "left";

        steps = number % 1000;

        if (steps < 100)
            break;

        cout << direction << " " << steps << endl;
    }
    while (number != 99999 && number < 100000);
        
    return 0;
}