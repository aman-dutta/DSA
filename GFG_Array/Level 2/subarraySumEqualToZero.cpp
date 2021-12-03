#include <bits/stdc++.h>
using namespace std;


bool isSubArryaSumEqualToZero(int arr[],int n){
    unordered_set<int> s;

    int sum = 0;
    for(int i=0; i<n;i++){
        sum += arr[i];
        
    }
}

int main(){
    int arr[] = { -3, 2, 3, 1, 6 };
    int n = sizeof(arr)/sizeof(arr[0]);

    if(isSubArryaSumEqualToZero(arr,n)) 
        cout<<"True"<<endl;
    else   
        cout<<"False"<<endl;
}