#include <bits/stdc++.h>
using namespace std;

/*
Input: array[]= {5, 10, 20, 15}
Output: 20
The element 20 has neighbours 10 and 15,
both of them are less than 20.

Time - O(logn) (For logarithmic we use Binary search wala technique)
*/

int findPeakUtil(int low, int high, int arr[], int n){
    int mid = low + (high - low) / 2;

    if((arr[mid] >= arr[mid-1] || mid ==0) && (arr[mid] >= arr[mid+1] || mid == n-1))
        return mid;
    else if(mid >0 && arr[mid-1] > arr[mid])
        return findPeakUtil(low, mid-1, arr, n);
    else 
        return findPeakUtil(mid+1, high, arr, n);
}
int findPeak(int arr[], int n){
    return findPeakUtil(0,n-1, arr, n);
}

int main(){
     int arr[] = { 1, 3, 20, 4, 1, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Index of a peak point is "
         << findPeak(arr, n);
    return 0;
}
