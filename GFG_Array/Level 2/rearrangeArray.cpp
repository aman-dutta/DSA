// Rearrange array in alternating positive & negative items with O(1) extra space

#include <bits\stdc++.h>
using namespace std;

//Here we check the element with out of index and then right rotate with the opposite sign element

void rotateArray(int arr[],int from, int to){
    int temp = arr[to];
    for(int i=to; i>from ;i-- ){
        arr[i] = arr[i-1];
    }
    arr[from] = temp;
}

void rearrange(int arr[], int n){
    int wrongIndex = -1;
    for(int i=0; i<n; i++){
        if(wrongIndex != -1){
            if((arr[i]>=0 && arr[wrongIndex]<0) || (arr[i] <0 && arr[wrongIndex]>=0)){  //Checking opposite signed element
                rotateArray(arr,wrongIndex,i);
                if(i - wrongIndex >=2)   //If greater than 2 then automatically the next to next element is out of index
                    wrongIndex += 2;
                else    
                    wrongIndex = -1;
            }
                
        }else{
            if((arr[i]>=0 && i%2 == 0) || (arr[i]<0 && i%2 == 1))
                wrongIndex = i;
        }
    }
}

int main(){
   // int arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
   int arr[] = { -5, -2, 5, 2,4, 7, 1, 8, 0, -8 };
    int n = sizeof(arr)/sizeof(arr[0]);

    rearrange(arr, n);

    for(int i=0; i<n;i++) cout<<arr[i]<<" ";
}