class Solution {
public:
    int maxProduct(int n) {

        int rem, maxi = 0, maxi2 = 0;

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