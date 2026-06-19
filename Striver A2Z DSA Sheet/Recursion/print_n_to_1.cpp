// Write a recursive function to print numbers from N to 1.
// The function should start from N and decrement until it reaches 1.
// This demonstrates reverse recursion (decreasing order).

#include<iostream>
using namespace std;

// Function to print numbers from N to 1 using recursion
void printNto1(int n) {
    // Base case: stop when n becomes 0
    if (n == 0) return;

    // Print current value of n
    cout << n << " ";

    // Recursive call with n - 1
    printNto1(n - 1);
}

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;

    printNto1(n);
}