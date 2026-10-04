class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        int sum;
        for(int i=0;i<n-2;i++){
            int start=i+1,end=n-1;

            while(start<end){
                sum=nums[i]+nums[start]+nums[end];
                if(nums[i]+nums[start]+nums[end]==target){
                   return nums[i]+nums[start]+nums[end]; 
                }
              else if( abs(sum-target)<abs(ans-target)){
                ans=sum;
            }
            else if(sum<target){
                     start++;
            }
            else
            end--;
        }
        }
        return ans;
    }
};