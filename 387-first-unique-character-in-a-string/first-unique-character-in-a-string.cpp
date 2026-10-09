class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>um;
        int low=0,high=0;

        for(int high=0;high<s.size();high++){
            um[s[high]]++;
        }
        for(int i=0;i<s.size();i++){
            if(um[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};