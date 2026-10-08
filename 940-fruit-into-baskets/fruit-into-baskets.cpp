class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int h=0,l=0;
        int res=-1;

        unordered_map<int,int>um;

        for(int h=0;h<fruits.size();h++){
            um[fruits[h]]++;
            while(um.size()>2){
            
                um[fruits[l]]--;
                if(um[fruits[l]]==0){
                    um.erase(fruits[l]);
                }
                l++;
            }
            int len=h-l+1;
            res=max(res,len);
        }
        return res;
    }
};