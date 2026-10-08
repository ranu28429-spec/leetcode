class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n =nums.size();
       int l=0, h=l+1;
       nums[0]=nums[l];
       int count=1;

       while(h<n){
        if(nums[l]==nums[h]){
            h++;
        }
        else{
        nums[l+1]=nums[h];
        count++;
        l++,h++;
        }
       }
       return count;
    }
};