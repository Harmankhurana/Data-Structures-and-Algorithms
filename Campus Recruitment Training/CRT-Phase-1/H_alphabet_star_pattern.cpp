// A Program for printing H alphabet star pattern
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Number Here: ";
    cin >> n;
    int mid = (n+1)/2; // formula for taking out mid

    for (int i = 1 ; i <= n ; i++) {
        for (int j = 1 ; j <= n ; j++) {
            // If-else statement
            if(j == 1 || j == n || i == mid){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// input - Enter Your Number Here: 5
// output -
/*
    *   *
    *   *
    *****
    *   *
    *   *
*/