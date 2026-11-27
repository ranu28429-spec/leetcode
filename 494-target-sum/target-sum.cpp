class Solution {
public:

int target1(vector<int>&nums,int target,int index,int n,int ans){
    if(index==n){
        return ans==target?1:0;
    }

    // include
    int left=target1(nums,target,index+1,n,ans+nums[index]);
    // exclude
    int right=target1(nums,target,index+1,n,ans-nums[index]);

    return left+right;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        return target1(nums,target,0,nums.size(),0);
    }
};