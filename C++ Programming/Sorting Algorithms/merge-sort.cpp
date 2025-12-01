// What is Merge sort??
// Merge sort is an efficient, comparison-based sorting algorithm that follows the divide and conquer paradigm.
// It's time complexity is log2 n
#include<iostream>
using namespace std;

void merge ( vector <int> &arr , int low , int mid , int high){
    vecotr <int> temp;
    // [low.....mid]
    // [mid + 1.....high]
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high){
        if (arr[left] <= arr[right]){
            temp.add(arr[left]);
            left++;
        } else {
            // arr[left] >= arr[right]
            temp.add(arr[right]);
            right++;
        }
    }
    
    while (left <= mid){
        temp.add(arr[left]);
        left++;
    }

    while (right <=high){
        temp.add(arr[right]);
        right++;
    }

    for (int i = low= ; i <= high ; i++){
        arr[] = temp [i - low];
    }
}


void mS(vector <int> &arr , int low , int high) {
    if(low >= high) return;
    int mid = ( low + high ) / 2;
    mS(arr , low , mid);
    mS(arr , mid + 1 , high);
    merge(arr , low , mid , high);
}

void mergeSort(vector <int> &arr , int n){
    mS(arr , o , n-1);
}