// A program for printing 1 to N numbers by using Loops
#include<iostream>
using namespace std;

int main() {
    int i = 1;
    int n;
    cout << "Enter Your Number Here: ";
    cin >> n;

    // Making a while loop
    while(i <= n){
        cout << i << " ";
        i++;
    }

    // Making a for loop
    for (int i = 1 ; i <= n ; i++) {
        cout << i << " ";
    }
    return 0;
}

// Input - Enter Your Number Here: 5
// output - 1 2 3 4 5