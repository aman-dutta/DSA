#include <bits/stdc++.h>
using namespace std;

//Insertion Sort  --> This type of sorting is used when the array is almost sorted OR when the size is too small
//Best case O(n)
//Worst Case O(n^2)         --> If it is in descending order
//Space Complexity O(n)

int arr[] = {4,3,6,78,8,2,9,11,5,15,16};
//int arr[] = {11,25,12,22,64};
//int arr[] = {2,8,5,3,9,4};
int n = sizeof(arr)/sizeof(arr[0]);

void insertionSort(){
    for(int i=1;i<n;i++){
        int v = arr[i];
        int j = i;

        while( arr[j-1] > v && j >=1){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = v;
    }
}

int main (){
    insertionSort();

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}