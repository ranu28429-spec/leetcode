class Solution {
public:
    int maxFreqSum(string s) {
        int n = s.size();
        unordered_map<char, int> ans;
        for (int i = 0; i < n; i++) {
            ans[s[i]]++;
        }
        int maxi = 0;
        int maxi2 = 0;

        for (auto it : ans) {
            if (it.first == 'a' || it.first == 'e' || it.first == 'i' ||
                it.first == 'o' || it.first == 'u') {

                maxi2 = max(maxi2, it.second);
            }
        }
        for (auto it : ans) {
            if (it.first != 'a' && it.first != 'e' && it.first != 'i' &&
                it.first != 'o' && it.first != 'u') {
                maxi = max(maxi, it.second);
            }
        }

        return maxi + maxi2;
    }
};