#include <bits/stdc++.h>
using namespace std;

/*
    Input:
    N = 5
    A[] = {1, 2, 3, 4, 5}
    Output:
    5 4 1 2 3 
*/

void cyclicRotateByTwo(int arr[],int n){
     reverse(arr+n-2 ,arr+n);
    //  for(int i=0; i<n; i++) cout<<arr[i]<< " ";
    //  cout<<endl;
     reverse(arr, arr+n-2);
    //  for(int i=0; i<n; i++) cout<<arr[i]<< " ";
    //  cout<<endl;
     reverse(arr, arr+n);

     for(int i=0; i<n; i++) cout<<arr[i]<< " ";
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cyclicRotateByTwo(arr,n);
}