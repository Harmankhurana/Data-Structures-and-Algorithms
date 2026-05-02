// A program for printing N to 1 (reverse order) numbers by using Loops
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Number Here: ";
    cin >> n;

    int i = n;

    // using while loop
    while(i >= 1) {
        cout << i << " ";
        i--;
    }
    // using for loop
    for (int i = n ; i >= 1 ; i--) {
        cout << i << " ";
    }
    return 0;
}