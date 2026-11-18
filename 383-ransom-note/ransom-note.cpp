class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        vector<int> count(26, 0);

        for (int i = 0; i < ransomNote.size(); i++) {
            count[ransomNote[i] - 'a']++;
        }

        for (int i = 0; i < magazine.size(); i++) {
            count[magazine[i] - 'a']--;
        }

        for (int i = 0; i < count.size(); i++) {
            if (count[i] > 0) {
                return false;
            }
        }
        return true;
    }
};