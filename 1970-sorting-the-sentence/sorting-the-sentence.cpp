class Solution {
public:
    string sortSentence(string s) {
        string temp;
        vector<string> ans(10);
        int index = 0;
        for (int i = 0; i < s.size();) {
            temp.clear();
            while (i < s.size() && s[i] != ' ') {
                temp += s[i];
                i++;
            }
            index = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[index - 1] = temp;

            if (i < s.size())
                i++;
        }
        string ans2;
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] != "") {
                if (ans2 != "")
                    ans2 += " ";
                ans2 += ans[i];
            }
        }
        return ans2;
    }
};