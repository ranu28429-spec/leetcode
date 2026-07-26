class Solution {
public:
    int addDigits(int num) {
        int rem,ans=0,ans2=0;
        while(num!=0){
            rem=num%10;
            ans+=rem;
            num/=10;
        }
        
         while(ans!=0){
            rem=ans%10;
            ans2+=rem;
            ans/=10;
        }
        ans=0;
         while(ans2!=0){
            rem=ans2%10;
            ans+=rem;
            ans2/=10;
        }
        return ans;
    }
};