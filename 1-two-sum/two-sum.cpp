class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int find;
        for(int i=0;i<n-1;i++){
            find=target-nums[i];
           for(int j=i+1;j<n;j++){
            if(nums[j]==find)
            return{i,j};
           }
        }
        return{};
    }
};
