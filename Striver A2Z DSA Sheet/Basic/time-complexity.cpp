// What is time complexity?
// Rate at which the time taken increases with respect to input size is called time complexity
// 3 Rules for analyzing time complexity - 1. TC should be computed with worst case scenario, 2. Avoid constants, 3. Avoid Lower values

// find the time complexity of the given programs

#include<iostream>
using namespace std;

int main() {
    int n;

    // Time complexity --> O(n*n) or O(n2)
    for (int i = 0 ; i <= n ; i++) {
        for (int j = 0 ; i <=n ; j++) {
            cout << "Harman";
        }
    }
}