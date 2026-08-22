class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

       for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
       }

       vector<vector<int>>ans;
     
       for(int i=0;i<m;i++){
          vector<int>row;
        for(int j=n-1;j>=0;j--){
        row.push_back({matrix[i][j]});
        }
         ans.push_back(row);
       }
        matrix=ans;
        
    }
};