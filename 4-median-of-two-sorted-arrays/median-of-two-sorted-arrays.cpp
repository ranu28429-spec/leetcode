class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int> ans;

        for (int i = 0; i < n1; i++) {
            ans.push_back(nums1[i]);
        }
        for (int i = 0; i < n2; i++) {
            ans.push_back(nums2[i]);
        }
        double ans5 = 0;

        sort(ans.begin(), ans.end());

        if (ans.size() % 2 == 1) {
            return ans[ans.size() / 2];
        } 
        else if (ans.size() % 2 == 0) {
            double end = ans.size() / 2;
            double start = end - 1;

            ans5 = (ans[start] + ans[end]) / 2.0;
        }
        return ans5;
    }
};