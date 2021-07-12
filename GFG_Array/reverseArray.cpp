#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4,5,1,2};
    int n = 4;

    int j = n-1;
    for(int i=0;i<n/2;i++){
        swap(arr[i], arr[j]);
        j--;
    }

    for(int i=0;i<n;i++) cout<<arr[i]<< " ";

}