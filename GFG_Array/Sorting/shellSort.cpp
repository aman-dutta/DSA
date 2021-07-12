#include <bits/stdc++.h>
using namespace std;

//Shell sort is better than quick sort and bubble sort in terms of time complexity

//int arr[] = {78,8,2,9,11,5,15,16,4,3,6};
//int arr[] = {11,25,12,22,64};
int arr[] = {170,75,802,90,66,2,24,45,7};
int n = sizeof(arr)/sizeof(arr[0]);


void shellSort(){
    for(int gap = n/2 ; gap !=0 ; gap = gap/2){
        for(int i=0;i<n-gap;i++){
            if(arr[i+gap] < arr[i] ) swap(arr[i], arr[i+gap]);
            if(i-gap >=0 ){
                if(arr[i] < arr[i-gap]) swap(arr[i], arr[i-gap]);
            }
        }
    }
}


int main(){
    shellSort();

     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
