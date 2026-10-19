class Solution {
public:
    int maxDistinct(string s) {
        vector<int> count(26, 0);

        int n = s.size();
        int high = 0, maxi = 0;
        for (int high = 0; high < n; high++) {
            count[s[high] - 'a']++;
        }
        for (int i = 0; i < count.size(); i++) {
            if (count[i] >= 1) {
                maxi++;
            }
        }
        return maxi;
    }
};