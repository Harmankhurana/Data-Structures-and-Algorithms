// A program for Printing numbers in their square
// 1 -> 1
// 2 -> 4
// 3 -> 9
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Number Here: ";
    cin >> n;

    for (int i = 1 ; i <= n ; i++) {
        cout << i << "-->"<< i * i << endl;
    }
    return 0;
}

// input - Enter Your Number Here: 5
// output -
// 1 --> 1
// 2 --> 4
// 3 --- 9
// 4 --> 16
// 5 --> 25