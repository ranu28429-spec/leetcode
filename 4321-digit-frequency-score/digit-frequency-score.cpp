class Solution {
public:
    int digitFrequencyScore(int n) {

        int rem, sum = 0;
        while (n != 0) {
            rem = n % 10;
            sum += rem;
            n=n/10;
        }
        return sum;
    }
};