// A Program for printing a square box star pattern by using nested loops
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Number Here: ";
    cin >> n;

    for (int i = 1 ; i <= n ; i++) { // outer loop
        for (int j = 1 ; j <= n ; j++) { // nested loop - loop inside a loop
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// input - Enter Your Number Here: 5
// output -
/*
    *****
    *****
    *****
    *****
    *****
*/