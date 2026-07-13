// A program for Printing numbers in their cube
// 1 -> 1
// 2 -> 8
// 3 -> 27
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Number Here: ";
    cin >> n;

    for (int i = 1 ; i <= n ; i++) {
        cout << i << "-->" << i * i * i << endl;
    }
    return 0;
}

/* or for (int i = 1 ; i <= n ; i++) {
        int cube = i * i * i;
        cout << i << "-->" << cube << endl;
    }
*/

// input - Enter Your Number Here: 5
// output -
// 1 --> 1
// 2 --> 8
// 3 --> 27
// 4 --> 64
// 5 --> 125