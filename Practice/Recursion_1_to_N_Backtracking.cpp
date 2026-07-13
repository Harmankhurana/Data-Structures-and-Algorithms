#include<iostream>
using namespace std;

void print(int count, int n) {
    if (count < 1) return;
    print(count - 1, n);
    cout << count << " ";
}

int main() {
    int n;
    cout << "Enter You're number here: " << endl;
    cin >> n;

    print(n, n);
}