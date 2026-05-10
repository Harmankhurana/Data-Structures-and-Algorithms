// Using loops for printing a line N number of times
// for loops -
/*
    for (intialization ; condition ; increment/decrement) {
        statements;
    }

*/

// do while loops - first statement always runs, then checks the condition
/*
    initialization;
    do{
        statement;
    }while(condition)
*/

#include<iostream>
using namespace std;

int main() {
    // for loops syntax for printing n times
    for(int i = 1 ; i <= 10 ; i++) {
        cout << "Harman, You're the best" << endl;
    }

    // do while loops syntax for printing n times
    int i = 1;
    do{
        cout << "Harman, You're the best" << endl;
        i++;
    } while(i <= 10);

    return 0;
}