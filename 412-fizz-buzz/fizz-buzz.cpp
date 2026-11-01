class Solution {
public:
    vector<string> fizzBuzz(int n) {

        vector<string> ans;
        int b = 1;
        while (b <= n) {
            if (b % 3 == 0 && b % 5 == 0) {
                ans.push_back("FizzBuzz");
            } else if (b % 3 == 0) {
                ans.push_back("Fizz");
            } else if (b % 5 == 0) {
                ans.push_back("Buzz");
            } else {
                ans.push_back(to_string(b));
            }
            b++;
        }
        return ans;
    }
};