class Solution {
public:
    int diagonalSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int sum=0,sum2=0;
        for(int i=0;i<m;i++){
        sum+=matrix[i][i];
        }
        int k=n-1;
        for(int i=0;i<m;i++){
                if(i==k){
                    k--;
                    continue;
                }
                sum2+=matrix[i][k];
                k--;
        }
        return sum + sum2;
    }
};