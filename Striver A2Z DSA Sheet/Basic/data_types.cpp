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

    // character datatype - for single characters
    char ch = 'h';
    cout << ch << endl;

    // Now if i want to store a variable (10), and (10) can be stored in all of these datatypes(int, long, long long, float and double)
    // Then why i can't use simply long long or double for this 10 variable?
    // My local machine takes space for storing this value, if i use long long it will take eat up a lot of memory space
    // That's why it is prefered that what ever the space is required only that much memory space should be given to that storing varible

    return 0;
}