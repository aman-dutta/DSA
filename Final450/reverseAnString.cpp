#include <bits/stdc++.h>
using namespace std;

/*
    Input:s = Geeks
    Output: skeeG
*/
string findReverse(string s){
    int n = s.length();

    for(int i=0; i<n/2; i++){
        swap(s[i], s[n-i-1]);
    }
    return s;
}

int main(){
    string s = "Aman";
    cout<<"The reverse of the string is: " + findReverse(s)<<endl;
}