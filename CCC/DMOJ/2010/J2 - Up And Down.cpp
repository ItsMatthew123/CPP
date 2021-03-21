#include <bits/stdc++.h>

using namespace std;

int main() {
    int nikky_forward, nikky_backward, byron_forward, byron_backward, steps, nikky_rounds, byron_rounds, nikky_total, byron_total, nikky_steps_left, byron_steps_left;
    cin >> nikky_forward >> nikky_backward >> byron_forward >> byron_backward >> steps;
    int nikky_steps = steps, byron_steps = steps;

    nikky_rounds = nikky_steps / (nikky_forward + nikky_backward);
    nikky_total = nikky_rounds * (nikky_forward - nikky_backward);
    nikky_steps_left = nikky_steps % (nikky_forward + nikky_backward);
    if (nikky_steps_left <= nikky_forward)
        nikky_total += nikky_steps_left;
    else if (nikky_steps_left > nikky_forward)
        nikky_total = nikky_total + nikky_forward - (nikky_steps_left - nikky_forward);

    byron_rounds = byron_steps / (byron_forward + byron_backward);
    byron_total = byron_rounds * (byron_forward - byron_backward);
    byron_steps_left = byron_steps % (byron_forward + byron_backward);
    if (byron_steps_left <= byron_forward)
        byron_total += byron_steps_left;
    else if (byron_steps_left > byron_forward)
        byron_total = byron_total + byron_forward - (byron_steps_left - byron_forward);

    if (nikky_total > byron_total)
        cout << "Nikky" << endl;
    else if (byron_total > nikky_total)
        cout << "Byron" << endl;
    else 
        cout << "Tied" << endl;

    return 0;
}