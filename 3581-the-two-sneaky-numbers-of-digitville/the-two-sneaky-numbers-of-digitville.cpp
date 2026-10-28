class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        
        vector<int> count(226, 0);
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }
        for (int i = 0; i < count.size(); i++) {
            if (count[i] > 1) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};