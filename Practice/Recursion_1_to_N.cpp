#include<iostream>
using namespace std;

void print(int count) {
    if (count == 3) {
        return;
    } else {
        cout << count << endl;
    }
    print(count + 1);
}

int main() {
    print(0);
}