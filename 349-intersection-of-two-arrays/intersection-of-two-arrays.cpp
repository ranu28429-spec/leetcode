class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int st=0,ed=0;
        while(st<nums1.size() && ed<nums2.size()){
            if(nums1[st]==nums2[ed]){
                if(ans.empty() || ans.back()!=nums1[st]){
                ans.push_back(nums1[st]);
                }
                st++,ed++;
            }else if(nums1[st]<nums2[ed]){
                st++;
            }
            else{
                ed++;
            }
        }
        return ans;
    }
};