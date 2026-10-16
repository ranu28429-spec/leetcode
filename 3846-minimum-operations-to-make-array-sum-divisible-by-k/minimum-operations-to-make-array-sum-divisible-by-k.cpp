class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0, count = 0;

        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        if (sum % k == 0) {
            return count;
        }
        while (sum % k != 0) {
               sum= sum - 1;
                count++;
        }

        return count;
    }
};