class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int maxi = INT_MIN, ans, ans2=0;
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>=n-k;i--){
            return nums[n-k];
        }
        return nums[n-k];
    }
};