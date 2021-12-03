#include <bits/stdc++.h>
using namespace std;

//For this question we can use two approaches
//1. Simply use three pointers and use the easy way
//2. Use Priority queue and return the first three elements
 
int main(){
    int arr[] = {10, 4, 3, 50, 23, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    priority_queue<int> pq;

    for(int i=0; i<n; i++) pq.push(arr[i]);

    for(int i=0; i<3;i++){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}