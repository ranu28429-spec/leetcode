class Solution {
public:
    int numberOfMatches(int n) {
        int ans=0;
        int rem;

        while(n>1){
            rem=n%2;
            n=n/2;
            ans+=n;
            n=n+rem;
        }
        return ans;
       
    }
};