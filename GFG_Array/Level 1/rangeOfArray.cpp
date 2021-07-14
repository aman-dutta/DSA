#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = { 5, 10, 15 };
    int n = arr.size();

    float maxElem = *max_element(arr.begin(), arr.end()); //using * because it returns pointer to the max element
    float minElem = *min_element(arr.begin(), arr.end());

    cout<<maxElem<<" "<<minElem<<endl;
    cout<<"Range: "<<maxElem-minElem<<endl;
    
    float coefficient = (maxElem-minElem)/(maxElem+minElem);
    cout<<"Coefficient of Range: "<< coefficient<<endl;
}