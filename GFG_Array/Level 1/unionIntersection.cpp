#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6}; 

    int n1 = sizeof(arr1)/ sizeof(arr1[0]);
    int n2 = sizeof(arr2)/ sizeof(arr2[0]);

    int i=0, j=0;
    while(i<n1 && j<n2){            //To print ht intersection of two arrays
        if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }else if(arr1[i] < arr2[j]){
            i++;
        }else{
            j++;
        }
    }
    cout<<endl;

    i =0, j=0;          
    while(i<n1 && j<n2){                    //To print the union of two arrays
        if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }else if(arr1[i] < arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }else{
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    while( i<n1) cout<<arr1[i++]<<" ";
    while( j<n2) cout<<arr2[j++]<<" ";
}