#include <bits/stdc++.h>
using namespace std;


//Time Complexity = O(n)

int main(){
    vector<int> arr = {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1};
    int sum = 11;
    int n = arr.size();

    unordered_map<int, int> m;

    int count = 0;
    // for(int i=0;i<n;i++){
    //     int x = sum - arr[i];

    //     if(m[x] == 0) m[arr[i]]++;
    //     else{
    //         count += m[x];
    //         m[arr[i]]++;
    //     }
    // }

    //Refactoring the above lines of Code
    
    for(int i =0; i<n;i++){
        if(m[sum-arr[i]] != 0){
            count += m[sum-arr[i]];
        } 
        m[arr[i]]++;
    }

    cout<<count<<endl;

}