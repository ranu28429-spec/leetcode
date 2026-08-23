class Solution {
public:
    bool checkIfPangram(string sentence) {
        string ans;
        for(char ch='a';ch<='z';ch++){
            for(int i=0;i<sentence.size();i++){
                if(ch==sentence[i]){
                    ans+=sentence[i];
                    break;
                }
            }
        }
        if(ans.size()==26)
            return 1;
        else 
        return 0;
    }
};