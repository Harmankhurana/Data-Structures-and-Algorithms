// A Program for printing a decreasing star triangle pattern by using nested loops
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Number Here: ";
    cin >> n;

    for (int i = 1 ; i <= n ; i++) {
        for (int j = i ; j <= n ; j++) {
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
    ****
    ***
    **
    *
*/