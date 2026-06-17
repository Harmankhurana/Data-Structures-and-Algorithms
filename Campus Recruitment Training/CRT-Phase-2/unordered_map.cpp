// a simple C++ program that uses an unordered_map (a hash table) to store and access data.
#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    // This creates a map called ageMap
    unordered_map<string, int> ageMap;
    ageMap["Alice"] = 25;
    ageMap["Bob"] = 30;
    ageMap["Charlie"] = 35;

    cout << "Alice age = " << ageMap["Alice"] << endl;
    cout << "Bob age = " << ageMap["Bob"] << endl;
    cout << "Charlie age = " << ageMap["Charlie"] << endl;
}


// output -
/*
    Alice age = 25
    Bob age = 30
    Charlie age = 35
*/