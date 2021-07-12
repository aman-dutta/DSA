#include <bits/stdc++.h>
using namespace std;

//Most of the sort() function given by many language uses this quickSort technique 
//Best Case - O(nlogn)
//worst case - O(n^2) This is when the array is already sorted in ascending or descending order

int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int pindex = start;

    for(int i = start; i<end; i++){
        if(arr[i] <= pivot){
            swap(arr[i], arr[pindex]);
            pindex++;
        }
    }
    swap(arr[pindex], arr[end]);
    return pindex;
}
void quickSort(int arr[], int start, int end){
    if(start < end){
        int pindex = partition(arr, start, end);
        quickSort(arr, start, pindex-1);
        quickSort(arr, pindex+1, end);
    }
}
int main(){
    int arr[] = {7,6,5,4,3,2,1,0};  
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}