class Solution {
public:
    int divide(int dividend, int divisor) {
        double ans = 0;
        if(dividend==INT_MIN && divisor==-1)
        return INT_MAX;
          if(dividend==INT_MIN && divisor==1)
        return INT_MIN;
        ans = 1LL*dividend / divisor;
        return ans;
    }
};