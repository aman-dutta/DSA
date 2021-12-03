#include <bits/stdc++.h>
using namespace std;
/*
Input:
        N = 6
        arr[] = 7 10 4 3 20 15
        K = 3
Output : 7
Explanation :
    3rd smallest element in the given 
    array is 7.
*/

void findkthelement(int arr[], int n, int k){
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0; i<n; i++) {
        pq.push(arr[i]);
    }

    // while(!pq.empty()){
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }

    for(int i=0; i<k ;i++){
        pq.pop();
    }

    int i = pq.top();
    cout<<i<<endl;
}

int main(){
    int arr[] = {7 ,10 ,4 ,3, 20 ,15};
    int n = 6;
    int k = 3;
    findkthelement(arr, 6,3);
}