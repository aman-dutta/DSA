#include <bits/stdc++.h>
using namespace std;


//There are many approaches to this question 

//The first one is using the elements in the array as an index and then making the element negative

int main(){
    int arr[] = {2,3,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n;i++){
        if(arr[abs(arr[i])] < 0)
            cout<< abs(arr[i])<<" ";
        else
            arr[abs(arr[i])] = arr[abs(arr[i])] * (-1);

    }

}