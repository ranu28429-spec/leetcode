class Solution {
public:
    int minMoves2(vector<int>& nums) {

        long long ans = LLONG_MAX;
        for (int i = 0; i < nums.size(); i++) {
            long long count = 0;
            for (int j = 0; j < nums.size(); j++) {
                count += abs(nums[j] - nums[i]);
            }
            ans = min(count, ans);
        }
        return ans;
    }
};