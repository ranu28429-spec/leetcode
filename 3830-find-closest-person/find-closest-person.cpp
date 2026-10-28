class Solution {
public:
    int findClosest(int x, int y, int z) {

        int steps = 0, steps2 = 0;
        while (x != z) {
            if (x < z) {
                x++;
                steps++;
            } else {
                x--;
                steps++;
            }
        }
        while (y != z) {
            if (y > z) {
                y--;
                steps2++;
            } else {
                y++;
                steps2++;
            }
        }
        if (steps < steps2) {
            return 1;
        } else if (steps == steps2) {
            return 0;
        }
        return 2;
    }
};