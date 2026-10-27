class Solution {
public:
    int maxProduct(int n) {

        int rem, maxi = INT_MIN, maxi2 = INT_MIN;

        while (n != 0) {
            rem = n % 10;
            if (rem > maxi) {
                maxi2 = maxi;
                maxi = rem;
            } else if (rem > maxi2) {
                maxi2 = rem;
            }
            n = n / 10;
        }
        return maxi * maxi2;
    }
};