class Solution {
public:
    bool canAliceWin(int n) {
        int index=10;

        if(n<10){
            return false;
        }

        while(n>0){
            n=n-index;
            index--;

            if(n<index && index%2==0){
                   return false;
                }
                else if(n<index && index%2==1){
                    return true;
                }
                else if(n==index && index %2==0){
                    return true;
                }
                else if(n==index && index %2==1){
                    return false;
                }
            }
        return true;
    }
};