#include <bits/stdc++.h>

using namespace std;

void declare_and_access_map() {
    map<string, int> people = {
        {"Person 1", 26},
        {"Person 2", 18},
        {"Person 3", 52}
    };

    cout << people["Person 2"] << endl;

    for(auto &item : people)
        cout << item.first << " " << item.second << endl;   
}

void map_operations() {
    map<string, int> people = {
        {"Person_1", 26},
        {"Person_2", 18},
        {"Person_3", 52}
    };

    people["Person_4"] = 6;  // Add

    people["Person_3"] = 33;  // Update

    people.erase("Person_2");  // Erase

    // if (people.count("Person_4") > 0)
    //     cout << "exists; has value" << endl;
    // else 
    //     cout << "doesn't exist; no value" << endl;

    for(auto &item : people)
        cout << item.first << " " << item.second << endl;
}

int main() {
    // declare_and_access_map();
    map_operations();

    return 0;
}