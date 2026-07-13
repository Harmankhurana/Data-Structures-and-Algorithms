#include<iostream>
using namespace std;

void print(int count, int n) {
    if (count > n) {
        return;
    } else {
        cout << count << endl;
    }
    print(count + 1, n);
}

int main() {
    int n;
    cout << "Enter You're number here: " << endl;
    cin >> n;
    print(1, n);
}