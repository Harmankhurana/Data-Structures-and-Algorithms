// Function are a set of code which performs something for you
// Function are used to modularise code
// Function are used to increase readablity
// Functions are used to use the same code multiple times
// Void functions which does not return anything

#include<iostream>
using namespace std;

// creating a function here
void printName() {
    cout << "Harman" << endl;
}

int main() {
    // calling that function here(i can call it one time or multiple times depending on the working of code)
    printName(); // Harman
    printName(); // Harman
    printName(); // Harman
    printName(); // Harman
    return 0;
}