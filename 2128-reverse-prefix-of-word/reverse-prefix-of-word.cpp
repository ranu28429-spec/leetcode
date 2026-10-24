class Solution {
public:
    string reversePrefix(string word, char ch) {

        string ans;
        int chx = 0;

        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                chx = i;
                break;
            }
        }
        for (int i = chx; i >= 0; i--) {
            ans += word[i];
        }
        for (int i = chx + 1; i < word.size(); i++) {
            ans += word[i];
        }

        return ans;
    }
};