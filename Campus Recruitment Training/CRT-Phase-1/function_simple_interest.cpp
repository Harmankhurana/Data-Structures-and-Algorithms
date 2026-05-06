// A function that takes Principal(initial amount), Rate of interest(per year) and Time(in years), and returns Simple Interest
// formula -> SI = (P × R × T) / 100
#include<iostream>
using namespace std;

int simpleInterest(int p, int r, int t) {
    int SI = (p * r * t) / 100;
    return SI;
}

int main() {
    int p,r,t;

    cout << "Enter the Principal(initial amount) Here: ";
    cin >> p;

    cout << "Enter the Rate of interest(per year) Here: ";
    cin >> r;

    cout << "Enter the Time(in years) Here: ";
    cin >> t;

    int SI = simpleInterest(p, r, t);
    cout << SI << endl;
    return 0;
}