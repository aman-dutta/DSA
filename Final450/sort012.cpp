#include <bits/stdc++.h>
using namespace std;


void sort_this(int arr[], int n){
    int i=0, j=0, k = n-1;

    while(j<=k){
        if(arr[j] == 1){
            j++;
        }else if(arr[j] == 0){
            swap(arr[i], arr[j]);
            i++;
            j++;
        }else if(arr[j] == 2){
            swap(arr[j], arr[k]);
            k--;
        }
    }

    for(i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,1,2,0,0,0,1,2,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort_this(arr, n);
}
