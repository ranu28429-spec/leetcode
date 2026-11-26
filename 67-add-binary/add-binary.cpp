class Solution {
public:
    string addBinary(string a, string b) {

        int carry = 0;
        string ans;
        int i = a.size() - 1;
        int j = b.size() - 1;
        while (i >= 0 || j >= 0 || carry) {

            // ternary operator shortform of if else
            // first checkcondition? then if yes change: if not found that value
            
            int c = (i >= 0) ? a[i] - '0' : 0;
            int d = (j >= 0) ? b[j] - '0' : 0;
            int sum = c + d + carry;
            ans += sum % 2 + '0';
            carry = sum / 2;

            i--, j--;
        }

        if (carry > 0) {
            ans += '1';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};