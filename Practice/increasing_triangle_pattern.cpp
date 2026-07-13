// A Program for printing a increasing star triangle pattern by using nested loops
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Number Here: ";
    cin >> n;

    for (int i = 1 ; i <= n ; i++) {
        for (int j = 1 ; j <= i ; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// input - Enter Your Number Here: 5
// output -
/*
    *
    **
    ***
    ****
    *****

*/