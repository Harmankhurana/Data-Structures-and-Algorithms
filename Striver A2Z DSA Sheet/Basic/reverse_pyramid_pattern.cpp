// A program for printing a reverse pyramid pattern

#include<iostream>
using namespace std;

void invertedPyramid(int n) {
    for (int i = 1; i <= n; i++) {

        // spaces → (i - 1)
        for (int k = 1; k <= i - 1; k++) {
            cout << " ";
        }

        // stars → 2*(n - i) + 1
        for (int j = 1; j <= 2*(n - i) + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    invertedPyramid(n);
    return 0;
}

// input - "Enter the value of n: 5
// output -
/*
*********
 *******
  *****
   ***
    *
*/