// A program which takes two input for rows and columns and prints a matrix pattern
#include<iostream>
using namespace std;

void rectanglePattern(int n, int m) {
    for (int i = 1 ; i <= n ; i++) {
        for (int j = 1 ; j <= m ; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cout << "Enter the value for rows: ";
    cin >> n;

    cout << "Enter the value for columns: ";
    cin >> m;

    rectanglePattern(n,m);
    return 0;

}

// input - 
// Enter the value for rows: 5
// Enter the value for columns: 4
// output -
/*
    * * * * 
    * * * * 
    * * * * 
    * * * * 
    * * * * 
*/