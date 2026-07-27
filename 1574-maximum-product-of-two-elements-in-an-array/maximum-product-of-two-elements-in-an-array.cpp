class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();
        sort(nums.begin(), nums.end());
        int maxi = INT_MIN, maxi2 = INT_MIN;
        
        for (int i = 0; i < n - 1; i++) {
            maxi = max(nums[i], maxi);

            for (int j = i + 1; j < n; j++) {
                maxi2 = max(nums[j], maxi2);
            }
        }
        maxi = maxi - 1;
        maxi2 = maxi2 - 1;
        return maxi * maxi2;
    }
};