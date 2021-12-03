#include <bits/stdc++.h>
using namespace std;

/*
Input: matrix = [
    ["1","0","1","0","0"],
    ["1","0","1","1","1"],
    ["1","1","1","1","1"],
    ["1","0","0","1","0"]]
Output: 6
Explanation: The maximal rectangle is shown in the above picture.

INCOMPLETEEEEEE. SAME AS LArgest Rectangle in Histogram 
*/

void findMaximalRectangle(int arr[][4]){
    int dp[4] = arr[0];
    
}

int main(){
    int A[4][4] = {
        { 0, 1, 1, 0 },
        { 1, 1, 1, 1 },
        { 1, 1, 1, 1 },
        { 1, 1, 0, 0 },
    };

    findMaximalRectangle(A);
}