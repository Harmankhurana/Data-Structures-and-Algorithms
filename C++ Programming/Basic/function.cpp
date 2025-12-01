// A function which takes a parameter (name) and prints it with greeting
// To execute this just write - 1. g++ function.cpp -o main (for compiling) 2. function.exe (for excecuting)
#include <iostream>
using namespace std;

void printName(string name){
    cout << "Hey!" << name << endl;
}

int main(){
    string name;
    cin >> name;
    printName(name);
    return 0;
}