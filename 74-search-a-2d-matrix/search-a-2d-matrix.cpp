class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int start = 0, end = n - 1, mid;

        for (int i = 0; i < m; i++) {
            start=0,end=n-1;
            while (start <= end) {
                mid = start + (end - start) / 2;
                if (matrix[i][mid] == target)
                    return 1;
                else if (matrix[i][mid] < target)
                    start++;
                else
                    end--;
            }
        }
        return 0;
    }
};