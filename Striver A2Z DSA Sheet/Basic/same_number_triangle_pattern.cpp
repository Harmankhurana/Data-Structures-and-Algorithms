// A program that takes an integer input 'n' (number of rows) and prints a right-angled triangle pattern 
// where each row contains the same number repeated equal to the row number.
#include<iostream>
using namespace std;

void sameNumberTrianglePattern(int n) {
    for (int i = 1 ; i <= n ; i++) {
        for (int j = 1 ; j <= i ; j++) {
            cout << i;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    sameNumberTrianglePattern(n);
    return 0;

}

// input - 
// Enter the value of n: 5
// output -
/*
    1
    22
    333
    4444
    55555
*/