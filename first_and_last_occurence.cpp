#include<iostream>
#include<vector>
using namespace std;

vector<int>firstAndLast(vector<int>&nums,int idx,vector<int>ans,int num){

    if(idx==nums.size()){
        return;
    }
    if(nums[idx]==num){
        if(ans[0]==-1){
            ans[0]=idx;
        }
        else{
            ans[1]=idx;
        }
    }
        
    firstAndLast(nums,idx+1,ans,num);
}