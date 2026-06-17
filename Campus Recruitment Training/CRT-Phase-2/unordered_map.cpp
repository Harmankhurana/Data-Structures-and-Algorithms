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

    // increasing age of Bob to +3
    ageMap["Bob"] = ageMap["Bob"] + 3; 
    cout << "Bob age = " << ageMap["Bob"] << endl;

    // changing the age of Charlie to 60
    ageMap["Charlie"] = ageMap["Charlie"] + 25;
    // or age["Charlie"] = 60
    cout << "Charlie age = " << ageMap["Charlie"] << endl;

    // Looping over the map(table) - printing all entries in map
    cout << "\nAll entries in the map:" << endl;
    for (const auto& row : ageMap) {
        cout << row.first << ": " << row.second << endl;
    }

    // Checking whether an entry is present or not
    if (ageMap.find("Bob") != ageMap.end()) {
        cout << "Bob is in the map. " << endl;
    } else {
        cout << "Bob is not present" << endl;
    }

    if (ageMap.find("Trump") != ageMap.end()) {
        cout << "Trump is in the map. " << endl;
    } else {
        cout << "Trump is not present" << endl;
    }

}

// output -
/*
    Alice age = 25
    Bob age = 30
    Charlie age = 35

    Bob age = 33 (new age)

    Charlie age = 60 (new age)

    All entries in the map: (with new values)
    Charlie: 60
    Bob: 33
    Alice: 25

    
*/