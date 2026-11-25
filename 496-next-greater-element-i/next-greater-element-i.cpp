class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int k = 0, elem = 0;
        for (int i = 0; i < nums1.size(); i++) {

            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    k = j;
                    elem = nums2[j];
                    nums1[i] = -1;

                    for (int f = k + 1; f < nums2.size(); f++) {
                        if (nums2[f] > elem) {
                            nums1[i] = nums2[f];
                            break;
                        }
                    }
                    break;
                }
            }
        }
            return nums1;
        }
    };