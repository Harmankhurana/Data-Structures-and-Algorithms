// A program for Printing numbers in their odd number order
// 1 3 5 7 9 11....
// Using the formula (2*i-1)
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Number Here: ";
    cin >> n;

    for (int i = 1 ; i <=n ; i++) {
        cout << 2*i-1 << " ";
    }
    return 0;
}

// input - Enter Your Number Here: 5
// output - 1 3 5 7 9