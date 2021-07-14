#include <bits/stdc++.h>
using namespace std;

//This question asks you to move all the negative elements in the array to one side 


//Using two-pointer approach
void moveNegative(int arr[], int n){
    int i =0,j=0;

    while(j<n){
        if(arr[j] < 0){
            swap(arr[i], arr[j]);
            i++;
        }
      j++;
    }
}

int main(){
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr)/sizeof(arr[0]);

    moveNegative(arr, n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}