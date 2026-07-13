// A program for Printing numbers in their even number order
// 0 2 4 6 8 10....
// Using the formula (2*i-2)
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Number Here: ";
    cin >> n;

    for (int i = 1 ; i <= n ; i++) {
        cout << 2 * i - 2 << " ";
    }
    return 0;
}

// input - Enter Your Number Here: 5
// output - 0 2 4 6 8
