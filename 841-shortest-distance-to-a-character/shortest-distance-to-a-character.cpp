class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>ans(s.size(),INT_MAX);
        int index=-1;

        for(int i=0;i<s.size();i++){
            if(s[i]==c)
            index=i;

            if(index!=-1)
            ans[i]=i-index;
        }
        index=-1;

        for(int i=s.size();i>=0;i--){
            if(s[i]==c)
            index=i;

            if(index!=-1)
            ans[i]=min(ans[i],index-i);
        }
        return ans;
    }
};