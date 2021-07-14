#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int min_ele = arr[0];
    int max_ele = arr[0];

    for(int i=1;i<n;i++){
        min_ele = min(min_ele, arr[i]);
        max_ele = max(max_ele, arr[i]);
    }

    cout<<min_ele<<" "<<max_ele;

}