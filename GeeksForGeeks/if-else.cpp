/*Given an integer n. Your task is to check if the integer is greater than, less than or equal to 5.
If the integer is greater than 5, then print "Greater than 5" (without quotes).
If the integer is less than 5, then print "Less than 5".
If the integer is equal to 5, then print "Equal to 5". */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
     if (n == 5){
            cout << "Equal to 5";
        }
        else if(n > 5){
            cout << "Greater than 5";
        }
        else if(n < 5){
            cout << "Less than 5";
        }
        return 0;
}