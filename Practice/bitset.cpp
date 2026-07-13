#include<iostream>
#include<bitset>
using namespace std;

int main() {
    cout << "8 = " << bitset<8>(8) << endl; // 00001000
    cout << "10 = " << bitset<8>(10) << endl; // 00001010
    cout << "15 = " << bitset<8>(15) << endl; // 00001111

}
