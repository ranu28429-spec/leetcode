class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();

        int ans = 0, ans2 = 0, total, rem;

        for (int i = 0; i < n; i++) {
            ans2 += nums[i];
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] > 9) {
                while (nums[i] != 0) {
                    rem = nums[i] % 10;
                    nums[i] = nums[i] / 10;
                    ans += rem;
                }
            }
            ans += nums[i];
        }
        total = ans2 - ans;

        return total;
    }
};