// Write a recursive function to print your name N times.
// The function should take a parameter (count) and print the name
// until the count reaches N (base condition).
// This helps understand how recursion repeats a task multiple times.

#include<iostream>
using namespace std;

void printName(int count, int n) {
    if (count > n) {
        return;
    } else {
        cout << "Harman Singh Khurana" << endl;
    }
    count++;
    printName(count, n);
    
}

int main() {
    int n;
    cout << "Enter Your Number here" << endl;
    cin >> n;
    printName(1, n);
}