class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n =nums.size();
        vector<int>arr1(n);
        int j=0;
     
      k=k%n;

        if(k>n)
        return;

        for(int i =k;i<n;i++){
           arr1[i] =nums[j];
            j++;
        }

        int h=n-k;
        for(int i =0;i<k;i++){
            arr1[i]=nums[h];
            h++;
        }
        for(int i =0;i<n;i++){
            nums[i]=arr1[i];
        }
    }
};