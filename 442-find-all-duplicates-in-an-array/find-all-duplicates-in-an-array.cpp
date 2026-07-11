class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int start = 1;
        while (start < nums.size()) {
            if (nums[start] == nums[start - 1])
                ans.push_back(nums[start]);
            start++;
        }
        return ans;
    }
};