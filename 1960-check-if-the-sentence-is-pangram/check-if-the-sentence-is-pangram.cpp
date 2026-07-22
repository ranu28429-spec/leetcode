class Solution {
public:
    bool checkIfPangram(string sentence) {
        string s;
        for(char p='a';p<='z';p++){
            for(int i=0;i<sentence.size();i++){
                if(p==sentence[i]){
                s+=p;
                break;
                }
            }
        }
       if(s.size()==26)
        return 1;
        else
        return 0;
    }
};