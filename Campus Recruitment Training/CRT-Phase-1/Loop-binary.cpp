// A program for printing binary numbers in sequence
// 1 0 1 0 1 0....
// Using the formula (i%1)
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Number Here: ";
    cin >> n;

    for (int i = 1 ; i <= n ; i++) {
        cout << i % 1 << " ";
    }
    return 0;
}

// input - Enter Your Number Here: 5
// output - 1 0 1 0 1