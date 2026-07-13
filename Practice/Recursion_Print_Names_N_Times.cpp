#include<iostream>
using namespace std;

void Print(int count, int n) {
    if (count > n) {
        return;
    } else {
        cout << "Harman Singh Khurana" << endl;
    }
    Print(count + 1, n);
}

int main() {
    int n;
    cout << "Enter You're number here: " << endl;
    cin >> n;
    Print(1, n);
}