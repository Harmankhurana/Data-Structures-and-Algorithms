// What is Merge sort??
// Merge sort is an efficient, comparison-based sorting algorithm that follows the divide and conquer paradigm.
// It's time complexity is log2 n
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;  
    int left = low;
    int right = mid + 1;

    // Merge both sorted halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining right half
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy temp back to original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mS(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;

    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void mergeSort(vector<int> &arr, int n) {
    mS(arr, 0, n - 1);
}

int main() {
    vector<int> arr = {5, 2, 3, 1, 4};

    mergeSort(arr, arr.size());

    for (int x : arr) cout << x << " ";
    return 0;
}
