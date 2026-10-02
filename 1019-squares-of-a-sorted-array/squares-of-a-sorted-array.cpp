class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                count++;
            }
        }
        for(int i=count-1;i>=0;i--){
            nums[i]=nums[i]*nums[i];
        }
        for(int i=count;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }
        int low=count-1;
        int high=count;
        while(low>=0 && high<n){
            if(nums[low]<=nums[high]){
                ans.push_back(nums[low]);
                low--;
            }
            else{
            ans.push_back(nums[high]);
            high++;
            }
        }
        while(low>=0){
            ans.push_back(nums[low]);
            low--;
        }
        while(high<n){
        ans.push_back(nums[high]);
        high++;
        }
        return ans;
    }
};