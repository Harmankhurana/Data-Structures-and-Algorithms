// Understanding basic arrays
#include<iostream>
using namespace std;

int main() {
    // taking the size of the array(5)
    int arr[5];

    // asking the user to insert the value in the array(to store)
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    // printing the value stored in index 3
    cout << arr[3];

    // changing the stored value in the index 1
    arr[1] = 17;
    cout << arr[1];
    return 0;
}

// input - arr[5] = {2,4,6,8,10}
// output - 8
// output - 17