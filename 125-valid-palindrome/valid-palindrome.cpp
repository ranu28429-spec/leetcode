class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string s1;
        for (int i = 0; i < n; i++) {
            if (isalnum((unsigned char)s[i]))
                s1.push_back(tolower((unsigned char)s[i]));
        }

        string s2;
        for (int i = n - 1; i >= 0; i--) {
            if (isalnum((unsigned char)s[i]))
                s2.push_back(tolower((unsigned char)s[i]));
        }

        return s1 == s2;
    }
};