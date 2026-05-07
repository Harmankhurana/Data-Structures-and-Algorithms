// Writing pre-defined data types in C++ language
#include<iostream>
using namespace std;

int main() {
    // Integer datatype
    int x = 5;
    cout << x << endl;

    // Long datatype - for long int value
    long u = 341341;
    cout << u << endl;

    // Long long datatype - for bigger int value
    long long c = 150000000000;
    cout << c << endl;

    // Float datatype - for decimal values
    float t = 5.342;
    cout << t << endl;

    // double datatype - for bigger decimal values
    double q = 5353.3452725625;
    cout << q << endl;

    // String datatype - for string of characters(but only one string at a time)
    string g = "Hello";
    cout << g << endl;

    // getLine datatype - for more string of characters(checks the last enter), example - "Hey Harman, How you're doing today?"
    string str;
    getline(cin, str);
    cout << str << endl;

    return 0;
}