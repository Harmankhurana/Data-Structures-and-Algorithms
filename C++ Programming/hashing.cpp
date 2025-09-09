// Code for Hashing - Making a different array called Hash for storing the values and updating it from the main array
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }


// Pre-Computation
 int hash[26] = {0};
    for (int i = 0 ; i < n ; i++){
        hash[arr[i]] += 1;
    }

 int q; 
 cin >> q;
 while(q--){
    int number; 
    cin >> number;
    // fetch 
    cout << hash[number] << endl;
 }
 return 0;
}