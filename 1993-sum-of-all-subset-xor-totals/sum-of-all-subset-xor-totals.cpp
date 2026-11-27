class Solution {
public:
    int sum(vector<int> nums, int ans, int index, int n) {
        if (index == n) {
            return ans;
        }

        // include
        int left = sum(nums, ans ^ nums[index], index + 1, n);
        // exclude
        int right = sum(nums, ans, index + 1, n);

        return left + right;
    }

    int subsetXORSum(vector<int>& nums) {
        int ans = 0;
        int index = 0;
        int n = nums.size();
        return sum(nums, ans, index, n);
    }
};
