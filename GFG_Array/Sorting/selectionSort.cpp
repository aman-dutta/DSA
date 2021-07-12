#include <bits/stdc++.h>
using namespace std;


//Selection Sort 
//Time complexity = O(n^2) (Best and Worst Both)
//Space complexity = O(n)

int arr[] = {4,3,6,78,8,2,9,11,5,15,16};
//int arr[] = {11,25,12,22,64};
int n = sizeof(arr)/sizeof(arr[0]);

void selectionSort(){
   for(int i=0;i<n-1;i++){
       int mini = i;
       for(int j=i+1;j<n;j++){
         //cout<<arr[j]<<" ";
         if(arr[j] < arr[mini] ) mini = j;      //Continously finding the smallest and swapping with first
       }
       swap(arr[mini], arr[i]);
   }
}

int main (){
    selectionSort();

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}