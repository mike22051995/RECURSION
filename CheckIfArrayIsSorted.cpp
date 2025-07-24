#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool IsSorted(vector<int>&nums, int n){
    if(n==1) return true;
    if(nums[n-2]>nums[n-1]) return false;
    return IsSorted(nums,n-1);

}

int main(){
    vector<int>nums={1,2,4,3};
    cout<<IsSorted(nums,nums.size())<<endl;
    return 0;
}