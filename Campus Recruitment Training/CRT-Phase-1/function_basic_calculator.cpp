// A function that takes two integers and returns their addition, subtraction, multiplication and division
#include<iostream>
using namespace std;

// function for addition
int addition(int x, int y) {
    return (x + y);
}

// function for subtraction
int subtraction(int x, int y) {
    return (x - y);
}

// function for multiplication
int multiplication(int x, int y) {
    return (x * y);
}

// function for division
float division(int x, int y) {
    // checking condition of zero in denominator
    if (y == 0) {
        cout << "Cannot divide by zero";
        return 0;
    }
    else {
        return (float)x / y;
    }
}

int main() {
    // calling all function here
    int add = addition(5,4);
    int sub = subtraction(5,4);
    int multi = multiplication(5,4);
    float divide = division(5,4);

    cout << "Addition = " << add << endl; 
    cout << "subtraction = " << sub << endl; 
    cout << "multiplication = " << multi << endl;
    cout << "division = " << divide << endl;
}