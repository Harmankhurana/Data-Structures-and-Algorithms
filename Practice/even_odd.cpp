// A program for even or odd
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Number here: ";
    cin >> n;

    // Using modulus: if remainder is 0 → even, else odd
    if (n % 2 == 0){
        cout << "Your Number is Even";
    } else {
        cout << "Your Number is odd";
    }
    return 0;
}