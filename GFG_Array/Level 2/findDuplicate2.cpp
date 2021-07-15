#include <bits/stdc++.h>
using namespace std;


//This is the second approach to findDuplicate 

int main(){
    int arr[] = {2,3,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    //In this loop we are taking the elements in tht array as index and first doing mod by n(size of array) and adding n
    //At the end we check if the elements in the array is greater than 2*n(two times the size of the array)
    for(int i=0;i<n;i++){
        arr[arr[i]%n] = arr[arr[i]%n] + n;
    }

    // for(int i=0; i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0; i<n;i++){
        if(arr[i] >= n*2){  //Keep in mind the equal to sign
            cout<<i<<" ";
        }
    }
    
}