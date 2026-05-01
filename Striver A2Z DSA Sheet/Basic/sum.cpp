// Code for adding 2 numbers using a function 
#include<iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int main(){
    int a,b;
    cout << "Enter 2 numbers for summation";
    cin >> a >> b;
    cout << "The summation of a and b is " << sum(a,b) << endl;
    return 0;
}