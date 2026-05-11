// A program which takes two input for rows and columns and prints a right triangle pattern
#include<iostream>
using namespace std;

void rightTrianglePattern(int n) {
    for (int i = 1 ; i <= n ; i++) {
        for (int j = 1 ; j <= i ; j++) {
            cout << "* ";
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
    *
    * * 
    * * * 
    * * * *
    * * * * * 
*/