#include <bits/stdc++.h>
using namespace std;

/*
    Input:
    N = 5
    A[] = {1, 2, 3, 4, 5}
    Output:
    5 1 2 3 4
*/

void cyclicRotateByOne(int arr[],int n){

    int temp = arr[n-1];

    for(int i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }

    arr[0] = temp;

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cyclicRotateByOne(arr,n);
}