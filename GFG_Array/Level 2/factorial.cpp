#include <bits/stdc++.h>
using namespace std;


int multiply(int x, int res_size, int res[]){
    int carry = 0;
    for(int i=0; i<res_size; i++){
        int prod = x*res[i] + carry;

        res[i] = prod%10;
        carry = prod/10;
    }

    while(carry){
        res[res_size] = carry%10;
        carry /= 10;
        res_size++;
    }
    return res_size;
}

void factorial(int n){
    int res[500]; 
    
    res[0] = 1;
    int res_size = 1;

    for(int i=2; i<=n ; i++){
        res_size = multiply(i, res_size, res);
    }

    cout<<"The factorial of the number is: ";
    for(int i = res_size-1; i>=0; i--){
        cout<<res[i];
    }
}

int main(){
    int n;
    cin>>n;

    factorial(n);
}