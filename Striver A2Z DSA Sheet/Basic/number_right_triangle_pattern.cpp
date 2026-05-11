// A program which takes input for number of rows and prints a right triangle number pattern
#include<iostream>
using namespace std;

void rightTrianglePattern(int n) {
    for (int i = 1 ; i <= n ; i++) {
        for (int j = 1 ; j <= i ; j++) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    rightTrianglePattern(n);
    return 0;

}

// input - 
// Enter the value of n: 5
// output -
/*
    1
    12
    123
    1234
    12345
*/