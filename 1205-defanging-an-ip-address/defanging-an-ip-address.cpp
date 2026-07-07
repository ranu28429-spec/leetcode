class Solution {
public:
    string defangIPaddr(string address) {

        int n =address.size();
        string ans;
        for(char i =0;i<n;i++){
            if(address[i]=='.')
            ans=ans+"[.]";
            else
            ans+=address[i];
        }
        return ans;
    }
};