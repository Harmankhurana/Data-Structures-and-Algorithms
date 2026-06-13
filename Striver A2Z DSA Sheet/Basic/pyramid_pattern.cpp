// A program for printing a pyramid pattern
#include<iostream>
using namespace std;

void reverseRightTriangleNumberPattern(int n) {
    for (int i = 1 ; i <= n ; i++) {

        // left spaces
        for (int k = 1 ; k <= (n - i) ; k++){
            cout << " ";
        }

        // stars
        for (int j = 1 ; j <= 2*i - 1 ; j++) {
            cout << "*";
        }

        // move to next line
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    reverseRightTriangleNumberPattern(n);
    return 0;
}

// input - "Enter the value of n: 5
// output -
/*
    *
   ***
  *****
 *******
*********
*/