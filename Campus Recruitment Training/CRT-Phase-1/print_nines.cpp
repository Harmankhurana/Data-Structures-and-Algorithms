// This program prints a sequence of numbers where each term consists of repeating digit '9' in increasing order.
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many terms you want here: ";
    cin >> n;

    int num = 0;

    for (int i = 1 ; i <= n ; i++) {
        num = num * 10 + 9;
        cout << num << " ";
    }
    return 0;
}

// input - Enter how many terms you want here: 5
// output - 9 99 999 9999 99999