#include <bits/stdc++.h>
using namespace std;


//Merge Sort
//Time Complexity = O(nlogn)  Because it is divide and conquer
//Average, Best and worst all are same in merge sort
//Space complexity = O(n)

void merge(int arr[], int L[], int R[], int nL, int nR ){

    int i,j,k;
    i = 0,j =0, k=0;

    while(i<nL && j<nR){
        if(L[i] <= R[j] ){
            arr[k++] = L[i++];
        }else{
            arr[k++] = R[j++];
        }
    }
    while(i<nL) arr[k++] = L[i++];
    while(j<nR) arr[k++] = R[j++];
}

void mergeSort(int arr[], int n){
   if(n<2) 
    return;

    int mid = n/2;
    int L[mid], R[mid];

    for(int i=0; i<mid;i++) L[i] = arr[i];
    for(int i=mid;i<n;i++) R[i-mid] = arr[i];

    mergeSort(L, mid);
    mergeSort(R,mid);
    merge(arr, L, R, mid, n-mid);
}

int main(){
    int arr[] = {0,1,2,3,4,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,n);
    for(int i=0; i<n;i++) cout<<arr[i]<<" ";
}