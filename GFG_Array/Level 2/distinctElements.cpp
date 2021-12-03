#include <bits/stdc++.h>
using namespace std;

// NOT FULLY COMPLETEDD 
// INCOMPLETEEEEEEEEEEEEEEEEEE...........
void distinctElement(int arr[], int n, int k){
    unordered_map<int,int> m;
    int i,j=0;

    for(i=0; i<k;i++) m[arr[i]]++;

    cout<<m.size()<<" ";

    for(i; i<n;i++){
        m[arr[j]]--;
        m[arr[i]]++;
        j++;

        cout<<m.size()<<" ";
    }
}

int main(){
    int arr[] = {1,2,1,3,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;

    distinctElement(arr, n, k);
}