class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      vector<int>ans;
      sort(nums.begin(),nums.end());
       int start=0,end=1;
       while(start<end && end<=nums.size()-1){
        if(nums[start]==nums[end])
        ans.push_back(nums[start]);
        start++,end++;
       }
       return ans;
    }
};