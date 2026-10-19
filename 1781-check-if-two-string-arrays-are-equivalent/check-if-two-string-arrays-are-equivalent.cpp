class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {

        string sum,sum2;
        for(int i=0;i<word1.size();i++){
            sum+=word1[i];
        }
        for(int i=0;i<word2.size();i++){
            sum2+=word2[i];
        }
        if (sum==sum2){
            return true;
        }
        return false;
    }
};