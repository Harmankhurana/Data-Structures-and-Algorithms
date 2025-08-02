// Given a number n, if the number is between 1 and 10 both inclusive then return the number in words (Lower case English Alphabets) otherwise return "not in range".
#include<iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    switch (n) {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
         case 8:
            cout << "eight";
            break;
        case 9:
            cout << "nine";
            break;
        case 10:
            cout << "ten";
            break;
        default:
                cout << "not in range";
    }

    return 0;
}