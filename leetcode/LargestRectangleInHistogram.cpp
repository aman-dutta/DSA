#include <bits/stdc++.h>
using namespace std;

/*
Input: heights = [2,1,5,6,2,3]
Output: 10

Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.
*/

void largestRectangleArea(vector<int> heights){
    int n = heights.size();
    stack<int> s;

    vector<int> ps(n);
    for(int i=0; i<n; i++){
        while(!s.empty() && heights[s.top()] >= heights[i]){
            s.pop();
        }
        if(s.empty()){
            ps[i] = -1;
        }else{
            ps[i] = s.top();
        }
        s.push(i);
    }

    while(!s.empty()) s.pop();

    vector<int> ns(n);
    for(int i=n-1; i>=0; i--){
        while(!s.empty() && heights[s.top()] >= heights[i]){
            s.pop();
        }

        if(s.empty()){
            ns[i] = n;
        }else{
            ns[i] = s.top();
        }
        s.push(i);
    }
    
    cout<<"The next small array would be: ";
    for(int i: ns){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"The previous small array would be: ";
    for(int i: ps){
        cout<<i<<" ";
    }
    cout<<endl;

    int max_area = 0;
    for(int i=0; i<n ; i++){
        max_area = max(max_area, (ns[i]-ps[i]-1)*heights[i]);
    }
    cout<<max_area<<endl;
}

int main(){
        vector<int> heights = {2,1,5,6,2,3};
        largestRectangleArea(heights);
}