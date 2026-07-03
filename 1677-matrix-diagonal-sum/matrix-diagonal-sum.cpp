class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int n =mat[0].size();
        int sum=0;
        int sum2=0;
        for(int i =0;i<m;i++){
         sum+=mat[i][i];
         int k=n-i-1;
         if(k==i){
            continue;
         }
         sum2+=mat[i][k];
         }
        
        return sum+sum2;
        
    }
};