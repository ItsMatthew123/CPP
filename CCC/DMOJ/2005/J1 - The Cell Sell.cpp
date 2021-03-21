#include <bits/stdc++.h>

using namespace std;

int main() {
    float daytime, evening, weekend, plan_a, plan_b;
    cin >> daytime >> evening >> weekend;

    if (daytime >= 100)
        plan_a = (daytime - 100) * 0.25 + evening * 0.15 + weekend * 0.20;
    else 
        plan_a = evening * 0.15 + weekend * 0.20;
        
    if (daytime >= 250)
        plan_b = (daytime - 250) * 0.45 + evening * 0.35 + weekend * 0.25;
    else 
        plan_b = evening * 0.35 + weekend * 0.25;

    cout << "Plan A costs " << plan_a << endl;
    cout << "Plan B costs " << plan_b << endl;

    if (plan_a > plan_b)
        cout << "Plan B is cheapest." << endl;
    else if (plan_a < plan_b)
        cout << "Plan A is cheapest." << endl;
    else 
        cout << "Plan A and B are the same price." << endl;
    
    return 0;
}