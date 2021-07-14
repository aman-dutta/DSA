#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    //To cyclically rotate an array 
    //Using 2-Pointer Technique
    int i =0;
    int j = n-1;

    while(i<j){
        swap(arr[i], arr[j]);
        i++;
    }

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}