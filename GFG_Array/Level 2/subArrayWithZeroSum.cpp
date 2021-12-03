#include<bits/stdc++.h>
using namespace std;


void subArrayExists(int arr[], int n){
        int arr1[n];
        int sum = 0;
        
        for(int i=0; i<n;i++){
            sum = arr[i] + sum;
            arr1[i] = sum;
        }

        set<int> s;

        for(int i=0; i<n;i++){
            if(s.find(arr1[i]) != s.end() || arr1[i] == 0){  //Second condition is because we can have an array {10, -10}
                cout<<"YES EXISTS"<<endl;
                return;
            }else{
                s.insert(arr1[i]);
            }
        }
}


int main(){
    int arr[] = {4,2,-3,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    subArrayExists(arr,n); 
  
}