#include <bits/stdc++.h>
using namespace std;

/*
    Input:
    5 3
    1 2 3 4 5
    1 2 3

    Output: 
    5 (count of union of these two arrays)
    The below is the solution. Either use this or Use Set and insert all the values of both the arrays
    and return the length of the set
*/

void findUnion(int arr1[], int arr2[], int m, int n){
    int i=0, j =0;
    int count =0;

    while(i<m && j<n){
        if(arr1[i] < arr2[j]){
            // cout<<arr1[i]<<" ";
            count++;
            i++;
        }else if(arr1[i] > arr2[j]){
            // cout<<arr2[j]<<" ";
            count++;
            j++;
        }else{
            // cout<<arr1[i]<<" ";
            count++;
            i++;
            j++;
        }
    }

    while(i<m){
        // cout<<arr1[i]<<" ";
        count++;
        i++;
    }

    while(j<n){
        // cout<<arr2[j]<<" ";
        count++;
        j++;
    }
    cout<<count<<endl;
}

int main (){
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    findUnion(arr1, arr2, m ,n);
}