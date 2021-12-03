#include <bits/stdc++.h>
using namespace std;

/*
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.
Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]

Example 2:
Input: nums = [1,1]
Output: [2]
*/
void findDisappearedNumbers(vector<int> v){
    int n = v.size();
    for(int i=0; i<n;i++){
        if(v[abs(v[i])-1] > 0){
            v[abs(v[i])-1] = -v[abs(v[i])-1];
        }
    }

    for(int i=0; i<n; i++){
        if(v[i] > 0)  cout<<i+1<<" ";
    }
}

int main(){
    vector<int> v = {4,3,2,7,8,2,3,1};
    findDisappearedNumbers(v);
}