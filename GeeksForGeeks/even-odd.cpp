// Given a positive integer n, determine whether it is odd or even. Return true if the number is even and false if the number is odd.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n % 2 == 0){
        cout << "true";
    }
    else {
        cout << "false";
    }
}