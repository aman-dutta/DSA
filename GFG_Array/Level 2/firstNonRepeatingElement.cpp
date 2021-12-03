#include <bits/stdc++.h>
using namespace std;


//To find the first-non Repeating Element I have used hash map
//Using unordered_map because I don't care about the order of the element

int main(){
    int arr[] = {-1,2,-1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int, int> mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    for(auto it: mp){
        //cout<<it.first<<" "<<it.second<<endl;
        if(it.second == 1){
            cout<<it.first<<endl;
            break;
        } 
    }
}