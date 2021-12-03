#include <bits/stdc++.h>
using namespace std;


void maximumProduct(int arr[], int n){
    int max_overall = arr[0];
    int max_ending_here = arr[0];
    int min_ending_here = arr[0];

    for(int i=1; i<n; i++){
        int temp = max_ending_here;
        max_ending_here = max((arr[i], arr[i]*max_ending_here),min_ending_here*arr[i]);
        min_ending_here = min((arr[i], arr[i]*max_ending_here),min_ending_here*arr[i]);

        max_overall = max(max_overall, max_ending_here);
    }
    cout<<max_overall<<endl;
}

int main(){
    int arr[] = {8, -2, -2, 0 ,8 ,0, -6, -8, -6, -1};
    int n = sizeof(arr)/sizeof(arr[0]);

    maximumProduct(arr,n);
}