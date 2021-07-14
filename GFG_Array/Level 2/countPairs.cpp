#include <bits/stdc++.h>
using namespace std;

//This method changes the array as in we sort the array first and then run the loop
//Since we are sorting the array using sort(), the Time Complexity would be O(nlogn)

//For the solution without changing the array refer to the countPairs2.cpp file

int main(){
    vector<int> arr = {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1};
    int sum = 11;
    int n = arr.size();

    sort(arr.begin(), arr.end());

    int count = 0;

    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n;j++){
            if(arr[i] + arr[j] == sum)
               count++;
            if(arr[i] + arr[j] > sum)
                break;
        }
    }
    cout<<count<<endl;
}