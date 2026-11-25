class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++) {
            int sum = 0, sum2 = 0;

            // left
            for (int j = 0; j < i; j++) {
                sum += nums[j];
            }
            // right
            for (int k = i + 1; k < nums.size(); k++) {
                sum2 += nums[k];
            }
            if (sum == sum2) {
                return i;
            }
        }
        return -1;
    }
};