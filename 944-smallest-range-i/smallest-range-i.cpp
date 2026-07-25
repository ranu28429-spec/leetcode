class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int n=nums.size();

        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(nums[i],maxi);
        }
        maxi=maxi-k;
         int mini=INT_MAX;
        for(int i=0;i<n;i++){
            mini=min(nums[i],mini);
        }
        mini=mini+k;
        int diff=0;
        diff=maxi-mini;

        if(diff<=0)
        return 0;
        else
        return diff;
    }
};