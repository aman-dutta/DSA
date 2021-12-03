#include <bits/stdc++.h>
using namespace std;


//Kadane's Algo is used to find the sub array with largest sum 

int largestSumContiguous(int arr[],int n){
    int max_ending_here = 0;
    int max_so_far = INT_MIN;

    for(int i=0; i<n;i++){
        max_ending_here += arr[i];

        if(max_so_far < max_ending_here) max_so_far = max_ending_here;
        if(max_ending_here < 0) max_ending_here = 0;
    }
    return max_ending_here;
}

int main(){
    int arr[] = {1,2,3,-2,5};
    int n = 5;

    cout<<largestSumContiguous(arr,n)<<endl;
}