// A program that takes an integer input 'n' (number of rows) and prints a right-angled number triangle pattern 
// where each row contains the same number repeated equal to the row number.
#include<iostream>
using namespace std;

void reverseRightTriangleNumberPattern(int n) {
    for (int i = 1 ; i <= n ; i++) {
        for (int j = 1 ; j <= n - i + 1 ; j++) {
            cout << i << " ";
        }
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

// input - 
// Enter the value of n: 5
// output -
/*
    1 1 1 1 1
    2 2 2 2
    3 3 3
    4 4
    5
*/