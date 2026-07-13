// A function that takes an integer and returns whether it is even or odd
#include<iostream>
using namespace std;

// function
bool evenOrOdd(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    cout << "Enter Your Number Here: ";
    cin >> n;

    if (evenOrOdd(n)) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    return 0;
}