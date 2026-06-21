// Write a recursive function to print numbers from N to 1 (linearly) but using backtracking.
// The function should start from N and decrement until it reaches 1.
// This demonstrates backward recursion (decreasing order).

#include<iostream>
using namespace std;

void printNto1Backtracking(int i, int n) {
    if (i > n) {
        return;
    } else {
        printNto1Backtracking(i+1, n);
    }

    cout << i << " ";
}

int main() {
    int n;
    cout << "Enter Your Number here: " << endl;
    cin >> n;
    printNto1Backtracking(n, n);
}