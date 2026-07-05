class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m=matrix.size();
    int n =matrix[0].size();
     
     for(int i =0;i<m;i++){
        int start=0,end=n-1,mid;

        if((target==matrix[i][start])||(target==matrix[i][end]))
        return 1;


         if((target<matrix[i][end])&&(target>matrix[i][start]))

        while(start<=end){
            mid=start+(end-start)/2;

            if(matrix[i][mid]==target)
            return 1;

            else if(matrix[i][mid]<target)
            start=mid+1;

            else
            end=mid-1;
        

     }
     }
        return 0;
    }
};