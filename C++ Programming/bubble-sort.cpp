#include<bits/stdc++.h>
using namespace std; 

// function for bubble sort
void bubble_sort(int arr[] , int n){
    for(int i = n-1 ; i >=0 ; i--){
        int didSwap = 0;
        for(int j = 0 ; j <= i-1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        if(didSwap == 0){
            break;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    // input loop for the array
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    // calling the function
    bubble_sort(arr , n);
    // output loop for the array
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}