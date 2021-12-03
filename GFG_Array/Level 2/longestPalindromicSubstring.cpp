#include<bits/stdc++.h>
using namespace std;

string countLongestPalindromicSubstring(string s){
    bool dp[s.length()][s.length()];

    int start = 0;
    int len = 0;
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
            if(dp[i][j]){
                start = i;
                len = j-i+1;
            }
        }
    }
    return s.substr(start,len);
}

int main(){
        string s;

    cout<<"Enter the word to count the Palindromic Substring"<<endl;
    cin>>s;

    string result = countLongestPalindromicSubstring(s);

    cout<<result<<endl;
}