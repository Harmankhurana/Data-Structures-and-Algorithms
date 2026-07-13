#include<iostream>
using namespace std;

void print(int count, int n) {
    if (count > n) return;
    print(count + 1, n);
    cout << count << " ";
}

int main() {
    int n;
    cout << "Enter You're number here: " << endl;
    cin >> n;

    print(n, n);
}