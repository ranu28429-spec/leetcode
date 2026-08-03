class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return 0;

        int rem;
        long long ans=0;
        int i=x;
        while(i!=0){
            rem=i%10;
            ans=ans*10+rem;
            i=i/10;
        }
            if(ans==x)
            return 1;
            
        
        return 0;
    }        
    
};