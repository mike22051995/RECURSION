#include<iostream>
using namespace std;

void permutation(string s,string newstring){
    if(s.empty()){
        cout<<newstring<<endl;
    }
    for(int i=0;i<s.length();i++){
        char c=s[i];
        string st=s.substr(0,i)+s.substr(i+1);
        permutation(st,newstring+c);

    }
}
int main(){
    string s="ABC";
    permutation(s,"");
    return 0;
}