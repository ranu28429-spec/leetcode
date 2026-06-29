class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n =nums.size();
       auto result=unique(nums.begin(),nums.end());
        return result- nums.begin();
    }
};