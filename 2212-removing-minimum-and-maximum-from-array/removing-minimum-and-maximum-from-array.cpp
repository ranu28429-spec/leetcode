class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int n = nums.size();
        int mini = INT_MAX, maxi = INT_MIN;
        int ans=0,ans2=0;

        //if the size of the array is 1
        if (n==1){
            return 1;
        }
        //minimum integer
        for (int i = 0; i < n; i++) {
            if (nums[i] < mini) {
                mini = nums[i];
                ans2=i;
            }
        }
        //maximum integer
        for (int i = 0; i < n; i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
                ans=i;
            }
        }
        int count = 0, count2 = 0,count3=0,count4=0;
       
       if(ans2>ans){
        swap(ans2,ans);
       }

       for(int i=0;i<=ans;i++){
        count++;
       }
         for(int i=n-1;i>=ans2;i--){
            count2++;
         }
         for(int i=0;i<=ans2;i++){
            count3++;
         }
         for(int i=n-1;i>=ans;i--){
            count4++;
         }
         
         return min({count,count2,count3+count4});
    }
};