class Solution {
public:
    int mirrorDistance(int n) {

        int b = n;
        int rem, ans = 0;
        while (n != 0) {
            rem = n % 10;
            ans = ans * 10 + rem;
            n = n / 10;
        }
        return abs(ans - b);
    }
};