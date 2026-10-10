class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        int sum=0,mini=INT_MAX;
        
        for(int k=l;k<=r;k++){
            int sum=0;
            int low=0,high=k-1;
            for(int i=low;i<=high;i++){
                sum+=nums[i];
            }
            while(high<n){
                if(sum>0){
                    mini=min(sum,mini);
                }
                low++,high++;
                if(high<n){
                    sum=sum-nums[low-1]+nums[high];
                }
            }
        }
          if(mini==INT_MAX){
                return-1;
            }
            
            return mini;
        
    }
};