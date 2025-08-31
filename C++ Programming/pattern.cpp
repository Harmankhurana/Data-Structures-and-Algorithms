// Creating patterns using code in C++ programming language 

#include<iostream>
using namespace std;

/*  
    Pattern 1 
    ****
    ****
    **** 
*/

void pattern1(){
    for (int i = 0 ; i < 4 ; i++){
        for (int j = 0 ; j < 4 ; j++){
            cout << "* ";
        }
    cout << endl;
    }
}

/*
    Pattern 2
    *
    **
    ***
    ****
    *****
*/

void pattern2(){
    for (int i = 1 ; i <= 5 ; i++){
        for (int j = 1 ; j <= i ; j++){
            cout << "* ";
        }
    cout << endl;
    }
} 

/*
    Pattern 3
    1
    12
    123
    1234
    12345
*/

void pattern3(){
    for (int i = 1 ; i <=5 ; i++){
        for (int j = 1 ; j <= i ; j++){
            cout << j;
        }
    cout << endl;
    }
}


int main(){
    pattern1();
    cout << endl;
    pattern2();
    cout << endl;
    pattern3();
}