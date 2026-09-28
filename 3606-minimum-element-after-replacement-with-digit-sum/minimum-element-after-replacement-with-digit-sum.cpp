class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans2;
        int ans=0;

        for(int i=0;i<n;i++){
            int rem;
            while(nums[i]!=0){
                rem=nums[i]%10;
                nums[i]=nums[i]/10;
                ans+=rem;
                if(nums[i]==0){
                    ans2.push_back(ans);
                    ans=0;
                }
            }
        }
        int mini=INT_MAX;
        for(int i=0;i<ans2.size();i++){
            if(ans2[i]<mini){
            mini=ans2[i];
            }
        }
        return mini;
    }
};