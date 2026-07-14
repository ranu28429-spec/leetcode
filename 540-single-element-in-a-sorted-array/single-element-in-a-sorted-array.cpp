class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        if(n==1)
        return nums[0];

        for(int i=1;i<n-1;i++){
            if(nums[0]!=nums[1]){
            ans=nums[0];
            }

             else if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1]){
              ans= nums[i];
             }
              else if(nums[n-1]!=nums[n-2])
              ans= nums[n-1];
        }
        return ans;
    }
};