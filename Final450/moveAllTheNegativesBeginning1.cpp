#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n){
    int i=0, j = n-1;

    while(i<=j){
        if((arr[i] < 0 && arr[j] < 0)  || (arr[i] < 0 && arr[j] > 0))
            i++;
        else if(arr[i] > 0 && arr[j] > 0){
            j--;
        }else if(arr[i] > 0 && arr[j] < 0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    for(int i=0; i<n;i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[] = { -12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = 9;

    rearrange(arr, n);
}