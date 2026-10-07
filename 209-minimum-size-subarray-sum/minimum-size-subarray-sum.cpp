class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int st = 0, end = 0, sum = 0, res = INT_MAX;

        while (end < n) {
            sum += nums[end];

            while (sum >= target) {
                int len = end - st + 1;
                res = min(res, len);
                sum -= nums[st];
                st++;
            }
            end++;
        }
        if (res == INT_MAX) {
            return 0;
        }
        return res;
    }
};