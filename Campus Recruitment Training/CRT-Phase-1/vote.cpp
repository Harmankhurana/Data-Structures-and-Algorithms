// A program for checking the voting eligibility
#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age here: ";
    cin >> age;

    // using condition -> age
    if (age >= 18){
        cout << "Your age is above 18, therefore you are eligible to vote";
    } else {
        cout << "Your age is below 18, therefore you are not eligible to vote";
    }
    return 0;
}
