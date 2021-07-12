#include <bits/stdc++.h>
using namespace std;

//Bubble Sorting Algorithm
//Best Case - O(n)      If there is no any swap in the loop we will terminate 
//Worst Case - O(n^2)
//Space complexity - O(n)

int arr[] = {2,4,3,6,8,9,11,5,15,16};
int n = sizeof(arr)/sizeof(arr[0]);

void bubbleSort(){
        for(int i=0;i<n-1;i++){
            for(int j = i+1; j<n;j++){
                //cout<<arr[i]<<" "<<arr[j]<<endl;
                if(arr[i] > arr[j]) swap(arr[i], arr[j]);    //Change the greater than symbol to less than for descending order
            }
        }
}
int main(){
    bubbleSort();
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}