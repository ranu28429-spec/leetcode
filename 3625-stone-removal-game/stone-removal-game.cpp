class Solution {
public:
    bool canAliceWin(int n) {
        if (n < 10) {
            return false;
        }
        bool alicecanwin = true;
        int index = 10;
        while (n > 0) {
            n = n - index;
            index--;
            alicecanwin = !alicecanwin;
            if (n < index) {
                return !alicecanwin;
            }
        }
        return alicecanwin;
    }
};