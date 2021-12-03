#include <bits/stdc++.h>
using namespace std;

/*
    Input:s = Geeks
    Output: skeeG
    
    Using RECURSION 
*/

void findReverse(int start, int end, string &str){
    
    if(start < end){
        swap(str[start],str[end]);
         findReverse(start+1, end-1, str);
    }
    
}


int main(){
    string s = "Aman";
    findReverse(0,s.length()-1,s);
    cout<<"The reverse of the string is: " + s<<endl;
    return 0;
}