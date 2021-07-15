#include <bits/stdc++.h>
using namespace std;

//To find the first duplicate element in the array we use set which stores all the elements in the arrray and if it is already there in the set then we update the value in the variable 'min'
int main(){
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    set<int> s;
    int min = -1;

    for(int i=n-1; i>=0; i--){
        if(s.find(arr[i]) != s.end()){
            min = i;
        }else{
            s.insert(i);
        }
    }

    cout<<arr[min]<<endl;
}