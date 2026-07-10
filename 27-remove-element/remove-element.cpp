class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        vector<int>result;
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != val)
                result.push_back(nums[i]);
            else
                count++;
        }
        for (int i = 0; i < count; i++) {
            result.push_back(val);
        }
        nums = result;

        for (int i = n - 1; i > n - 1 - count; i--) {
            nums.pop_back();
        }
        return nums.size();
    }
};