// A function that takes two integers and returns their sum
#include<iostream>
using namespace std;

int sum(int x, int y) {
    return (x + y);
}

int main() {
    // calling function
    int result = sum(5,7);
    cout << result << endl;
    return 0;
}

// input - sum(5,7)
// output - 12