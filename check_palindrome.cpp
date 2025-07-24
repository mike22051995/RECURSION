#include<iostream>
using namespace std;

bool IsPalindrome(string s, int l, int r){
    if(l>=r){
        return true;
    }
    if(s[l]!=s[r]){
        return false;
    }
    return IsPalindrome(s,l+1,r-1);
}

int main(){
    string s="abcb";
    cout<<((IsPalindrome(s,0,s.length()-1))?"YES":"NO");
    return 0;
}