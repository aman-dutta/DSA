#include <bits/stdc++.h>
using namespace std;

/*
Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".
*/

int countPalindromicSubstring(string s){
    bool dp[s.length()][s.length()];

    int count = 0;
    for(int g=0; g<s.length(); g++){
        for(int i=0, j=g; j<s.length(); j++,i++){
            if(g == 0){
                dp[i][j] = true;
            }else if(g ==1 ){
                if(s[i] == s[j])dp[i][j] = true;
                else dp[i][j] = false;
            }else{
                if(s[i] == s[j] && dp[i+1][j-1] == true){
                    dp[i][j] = true;
                }else{
                    dp[i][j]= false;
                }
            }
            if(dp[i][j]) count++;
        }
    }
    return count;
}

int main(){
    string s;

    cout<<"Enter the word to count the Palindromic Substring"<<endl;
    cin>>s;

    int result = countPalindromicSubstring(s);

    cout<<result<<endl;

    
}