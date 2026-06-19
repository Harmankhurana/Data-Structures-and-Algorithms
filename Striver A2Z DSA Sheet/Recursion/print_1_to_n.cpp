// Write a recursive function to print numbers from 1 to N (linearly).
// The function should start from 1 and increment until it reaches N.
// This demonstrates forward recursion (increasing order).

#include<iostream>
using namespace std;

void print1toN(int count, int n) {
    if (count > n) {
        return;
    } else {
        cout << count << " ";
    }
    print1toN(count + 1, n);

}

int main() {
    int n;
    cout << "Enter Number till you want to print" << endl;
    cin >> n;
    print1toN(1, n);
}