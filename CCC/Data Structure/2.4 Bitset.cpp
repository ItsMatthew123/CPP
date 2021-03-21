#include <bits/stdc++.h>

using namespace std;

void set_value_by_index() {
    bitset <8> bits("00000000");
    bits.set(0, 1);     
    bits.set(7, 1);
    bits.reset(7);
    cout << bits << endl;
}

void convert_bits_to_string() {
    int x = 5;
    cout << bitset<16>(x) << endl;
    string binary_str = bitset<8>(x).to_string();
    cout << binary_str << endl;
    cout << binary_str[2] << endl;
}

void left_shift_right_shift() {
    int a = 16;
    cout << "a = 5, in binary: " << bitset<8>(a) << endl;
    cout << "a << 1 = " << bitset<8>(a<<1) << endl;
    cout << "a << 2 = " << bitset<8>(a<<2) << endl;
}

void iterate_bitset() {
    bitset <16> bits("01001010");
    for (int i = 0; i < 16; i++)
        cout << bits[i];
}

int main() {
    bitset <8> bits("00000000");
    // bitset <8> bits(0);

    bitset <16> bits_1("0000000100000001");
    cout << "Memory size of bits_1: " << sizeof(bits_1) << endl;
    bits_1.set(28, 1);

    return 0;
}