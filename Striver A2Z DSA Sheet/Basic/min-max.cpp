// Creating a min max function
#include<iostream>
using namespace std;

// function that checks Min Max values of the given integer
void MinMax(int a, int b) {
    if (a > b) {
        cout << a << " is a bigger number" << endl;
    }
    else if (a == b){
        cout << "both numbers are having same value" << endl;
    }
    else {
        cout << b << " is a bigger number" << endl;
    }
}

int main() {
    int a, b;
    cout << "Enter first integer: " << endl;
    cin >> a;
    cout << "Enter second integer: " << endl;
    cin >> b;

    MinMax(a, b);
    return 0;
}