#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int MaxOfArray(vector<int>&nums,int x){
    if(x==nums.size()-1){
        return nums[x];
    }
    return max(nums[x],MaxOfArray(nums,x+1));
    


}

int main(){
    vector<int>array={12,3,45,67,24,89,10,100,-100};
    cout<<MaxOfArray(array,0)<<endl;
    return 0;
}