#include<iostream>
using namespace std;

void printsubsequences(int i, string s, string result){
    if(i==s.size()){
        cout<<result<<endl;
        return;
    }
    printsubsequences(i+1, s, result+s[i]);
    printsubsequences(i+1,s,result);

    
}
int main(){
    string s="abc";
    string result="";
    printsubsequences(0,s,result);
    return 0;
}