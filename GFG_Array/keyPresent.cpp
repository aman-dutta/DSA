#include <iostream>
using namespace std;

string findKeyPresent(int arr[], int x, int k, int n){
    
    bool answer = false;

    for (int i = 0; i < n; i+=k ){
        answer = false;

        for(int j = i; j< i+k; j++){
            if(arr[j] == x) answer = true;
        }

        if(!answer)
            return "No";
    }

    return "Yes";
    
}

int main(){
    int arr[] = {5,8,7,12,14,3,9};
    int x = 8;
    int k = 2;
    int n = sizeof(arr)/ sizeof(arr[0]);

    string answer = findKeyPresent(arr, x, k, n);
    cout << answer << endl;
}