#include <bits/stdc++.h>
using namespace std;

//The array is sorted so we use Binary Search
//Binary search is best when the array is sorted

int binarySearch(int arr[], int low, int high, int x){
        if( low > high)
            return -1;
        
        int mid = low + (high-low)/2;
        if(arr[mid] > x){
            return binarySearch(arr,low, mid-1, x);
        }else if(arr[mid] < x){
            return binarySearch(arr,mid+1, high, x);
        }

        return mid;
}

void findfreq(int arr[], int n, int x){
    int count = binarySearch(arr, 0, n-1, x);
    
    if(count == -1){
         cout<<"Not present";
         return;
    }

    int i = count;
    int index = 0;

    while(i>=0 && arr[i] == x){
        //cout<<arr[i]<<" ";
        i--;
        index++;
    }
    i = count+1;
    while(i<n && arr[i] == x){
        //cout<<arr[i]<< " ";
        i++;
        index++;
    }
    cout<<index<<endl;
}

int main(){
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int x = 2;
    int n = sizeof(arr)/sizeof(arr[0]);

    findfreq(arr,n,x);
}