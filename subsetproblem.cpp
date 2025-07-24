#include<iostream>
#include<vector>

using namespace std;
void backtrack(int i,vector<vector<int>>&ans,vector<int>&temp,vector<int>&nums){
    if(i==nums.size()){
        ans.push_back(temp);
    }
    temp.push_back(nums[i]);
    backtrack(i+1,ans,temp,nums);
    temp.pop_back();
    backtrack(i+1,ans,temp,nums);
}
int main(){
    vector<vector<int>>ans;
    vector<int>temp;
     vector<int>nums={1,2,3};
    backtrack(0,ans,temp,nums);
}