class Solution {
public:
    bool canAliceWin(int n) {
        if (n < 10) {
            return false;
        }
        bool aliceturn = true;
        int index = 10;
        while (n > 0) {
            n = n - index;
            index--;
            aliceturn = !aliceturn;
            if (n < index) {
                return !aliceturn;
            }
        }
        return aliceturn;
    }
};