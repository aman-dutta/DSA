#include <bits/stdc++.h>
using namespace std;

/*
    Input:
        K = 2, N = 4
        Arr[] = {1, 5, 8, 10}
    Output:
        5
Explanation:
    The array can be modified as 
    {3, 3, 6, 8}. The difference between 
    the largest and the smallest is 8-3 = 5.
*/

void minimizeHeights(int arr[], int n, int k){
    sort(arr, arr+n);
    int ans = arr[n-1] - arr[0];
    int mini = arr[0] +k;
    int maxi = arr[n-1]-k;
    int mi,ma;

    for(int i=0; i<n-1; i++){
        mi = min(mini, arr[i+1]-k);
        ma = max(maxi, arr[i]-k);
        if(mi < 0) continue;
        ans = min(ans, ma-mi);
    }
    cout<<ans<<endl;
}

int main(){
    int k=3, n=5;
    int arr[] = {3, 9, 12, 16, 20};

    minimizeHeights(arr, n,k);
}