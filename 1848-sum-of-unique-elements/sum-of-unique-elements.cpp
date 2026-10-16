class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>um;
        int sum=0;

        for(int i=0;i<n;i++){
            um[nums[i]]++;
        }
        for(auto it:um){
            if(it.second==1){
                sum+=it.first;
            }
        }
        return sum;
    }
};