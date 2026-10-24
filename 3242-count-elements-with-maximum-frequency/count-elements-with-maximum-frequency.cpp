class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> count(101, 0);

        int ans = 0, sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }

        int maxi = INT_MIN;
        for (int i = 0; i < count.size(); i++) {
            if (count[i] > maxi) {
                maxi = count[i];
            }
        }
        for (int i = 0; i < count.size(); i++) {
            if (count[i] == maxi) {
                sum += count[i];
            }
        }
            return sum;
        }
    };