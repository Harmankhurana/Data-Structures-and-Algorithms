// write a simple switch-case program for days of the week in C++ language
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Number here:";
    cin >> n;

    switch (n) {
        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;
        
        case 3:
            cout << "Wednesday";
            break;

        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;

        case 7:
            cout << "Sunday";
            break;

        default:
            cout << "Invalid input! Please enter a number between 1 and 7.";
            break;
    }
    return 0;
}