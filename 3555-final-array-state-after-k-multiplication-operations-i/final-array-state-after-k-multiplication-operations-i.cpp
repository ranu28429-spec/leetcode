class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

        int b = 0;
        while (k > 0) {
            int mini = INT_MAX;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] < mini) {
                    mini = nums[i];
                    b = i;
                }
            }
            nums[b] = nums[b] * multiplier;
            k--;
        }
        return nums;
    }
};