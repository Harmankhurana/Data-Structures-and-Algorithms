// This program demonstrates basic recursion by printing numbers from 0 to 2
// using a base case and recursive function calls.

#include<iostream>
using namespace std;

void print(int count) {
    // Base case: stop recursion when count reaches 3
    if (count == 3) {
        return;
    } else {
        cout << count << endl; // Print current value of count
    }

    print(count + 1); // Recursive call with incremented count
}

int main () {
    // Initial function call starting from 0
    print(0);
}

// output -
// 0
// 1
// 2