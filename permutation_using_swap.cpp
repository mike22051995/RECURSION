#include<iostream>
#include<unordered_set>
using namespace std;

void permutationusingswap(int index,string s){
    if(index==s.length()){
        cout<<s<<endl;
        return;
    }
    unordered_set<char>seen;
    for(int i=index;i<s.length();i++){
        if(seen.count(s[i])) continue;
        seen.insert(s[i]);
        
        swap(s[index],s[i]);
        
        permutationusingswap(index+1,s);
        swap(s[index],s[i]);
    }

}
int main(){
    string s="AAC";
    permutationusingswap(0,s);
    return 0;
}