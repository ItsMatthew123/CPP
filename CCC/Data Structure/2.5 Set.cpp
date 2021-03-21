#include <bits/stdc++.h>

using namespace std;

void what_is_set() {
    // set<int> my_set;
    set<int> my_set = {1, 2, 3, 4};

    my_set.insert(3);
    my_set.insert(2);
    my_set.insert(1);
    my_set.insert(5);
    cout << my_set.size() << endl;
}

void iterate_set_and_delete_element() {
    set<int> set_1 = {1, 2, 3, 4};

    for (auto item : set_1)
        cout << item << " ";
    cout << endl;

    for (auto it = set_1.begin(); it != set_1.end(); it++)
        cout << *it;
}

void unordered() {
    unordered_set<int> unordered_set1;
    
    unordered_set1.insert(1);
    unordered_set1.insert(5);
    unordered_set1.insert(3);
    unordered_set1.insert(2);
}

void access_set_by_index() {
    set<int> set_1 = {1, 2, 3, 4};

    auto x = 2;  // integer
    auto x = '2';  // character

    auto it = set_1.begin();  // pointer of first element
    it++;  // pointer + 1, point to next element
    cout << *it;

    advance (it, 2);
    cout << *it;
}

void determine_element_by_set() {
    set<int> set_1 = {1, 2, 3, 4};

    auto it = set_1.find(4);
    if (it != set_1.end()) {
        cout << &it << endl;
        cout << *it << endl;
        cout << "FOUND!" << endl;
    } else {
        cout << &it << endl;
        cout << *it << endl; 
        cout << "NOT FOUND!" << endl;
    }
}

int main() {
    determine_element_by_set();
    
    return 0;
}