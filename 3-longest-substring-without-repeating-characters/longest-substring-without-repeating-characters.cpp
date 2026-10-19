class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>count(226,0);
        vector<string>ans;
        int n= s.size();
        int low=0,high=0;
        int maxi=0;
        for(int high=0;high<n;high++){
            count[s[high]]++;
            
            while(count[s[high]]>1){
                count[s[low]]--;
                low++;
            }
            int len=high-low+1;
            maxi=max(maxi,len);

        }
        return maxi;

    }
};