// Write a recursive function to print numbers from 1 to N (linearly) but using backtracking.
// The function should start from 1 and increment until it reaches N.
// This demonstrates backward recursion (decreasing order).

#include<iostream>
using namespace std;

void print1ToNBacktracking(int i, int n) {
    if (i < 1) {
        return;
    } else {
        print1ToNBacktracking(i-1, n);
    }

    cout << i << " ";
}

int main() {
    int n;
    cout << "Enter Your Number here: " << endl;
    cin >> n;
    print1ToNBacktracking(n, n);
}