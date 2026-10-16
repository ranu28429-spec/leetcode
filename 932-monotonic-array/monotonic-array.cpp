class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = is_sorted(nums.begin(), nums.end());
        bool decreasing = is_sorted(nums.rbegin(), nums.rend());

        return increasing || decreasing;
    }
};