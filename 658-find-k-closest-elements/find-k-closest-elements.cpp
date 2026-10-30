class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        vector<int> ans;
        int index = 0;

        if (arr.size() == k) {
            return arr;
        }

        else if (x < arr[0]) {
            for (int i = 0; i < k; i++) {
                ans.push_back(arr[i]);
            }
            return ans;

        } else if (x >= arr[arr.size() - 1]) {
            for (int i = arr.size() - k; i < arr.size(); i++) {
                ans.push_back(arr[i]);
            }
            return ans;
        }

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= x) {
                index = i;
            }
        }

        int j = index + 1;
        while (k != 0 && (index >= 0 || j < arr.size())) {

            if (index < 0) {
                ans.push_back(arr[j]);
                j++, k--;
            } else if (j > arr.size()) {
                ans.push_back(arr[index]);
                index--, k--;
            } else {
                int a1 = abs(arr[index] - x);
                int a2 = abs(arr[j] - x);

                if (a1 <= a2) {
                    ans.push_back(arr[index]);
                    index--;
                    k--;
                } else if (a1 > a2) {
                    ans.push_back(arr[j]);
                    j++;
                    k--;
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};