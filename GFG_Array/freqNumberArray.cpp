#include <bits/stdc++.h>
using namespace std;

int findFreq(int arr[], int x, int n){
    unordered_map<int,int> mp;

    for(int i=0; i<n ;i++){
        mp[arr[i]]++;
    }

    return mp[x];
}

int main(){
    int a[] = {0,5,5,5,4};
    int x = 5;

    int n = sizeof(a)/sizeof(a[0]);
    cout<<findFreq(a, x, n);

}
