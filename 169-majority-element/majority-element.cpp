class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int, int> um;

        for (int i = 0; i < nums.size(); i++) {
            um[nums[i]]++;
        }

        int maxi = 0;
        int ans;
        for (auto x : um) {
            if (x.second > maxi){
                maxi = x.second;
            ans = x.first;
            }
        }
        return ans;
    }
};