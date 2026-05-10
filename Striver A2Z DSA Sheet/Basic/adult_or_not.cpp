// A program that takes an input of age and prints if you're an adult or not
#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter Your Age Here: ";
    cin >> age;

    if (age >= 18) {
        cout << "You're an adult";
    } else {
        cout << "you're not an adult";
    }
    return 0;
}