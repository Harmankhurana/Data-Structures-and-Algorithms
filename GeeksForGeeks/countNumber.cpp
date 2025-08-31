// Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder). Return the total number of such digits.

// A digit d of n divides n evenly if the remainder when n is divided by d is 0 (n % d == 0).
// Digits of n should be checked individually. If a digit is 0, it should be ignored because division by 0 is undefined.

#include<iostream>
using namespace std;

int evenlyDivides(int n){
    int count = 0;
    int original = n;

    while(n > 0){
        int lastDigit = n % 10;
        if(lastDigit != 0 && original % lastDigit == 0){
            count++;
        }
        n = n / 10;
    }
    return count;
}

int main(){
    evenlyDivides(123456);
}