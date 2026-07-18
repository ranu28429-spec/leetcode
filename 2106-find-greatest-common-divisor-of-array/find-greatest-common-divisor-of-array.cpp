class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX,maxi=INT_MIN,ans=0;
        for(int i=0;i<n;i++){
         mini= min (nums[i],mini);
        }
         for(int i=0;i<n;i++){
         maxi= max (nums[i],maxi);
        }

        for(int i=1;i<=mini;i++){
            if(mini%i==0 && maxi%i==0){
                 ans=i;
            }
        }
        return ans;
    }
};