  class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();

          long long sm=LLONG_MIN,tm=LLONG_MIN,maxi=LLONG_MIN;

            for(int i=0;i<n;i++){
                if(nums[i]>maxi){
                    maxi=nums[i];
                }
            }
            for(int i=0;i<n;i++){
                if(nums[i]>sm && nums[i]!=maxi){
                    sm=nums[i];
                }
            }
             for(int i=0;i<n;i++){
                if(nums[i]>tm && nums[i]!=maxi && nums[i]!=sm){
                    tm=nums[i];
            }
             }
            if(tm==LLONG_MIN){
                return int(maxi);
            }
        return int(tm);
    }
};
  