class Solution {
public:
    int countDigits(int num) {
    int rem,count=0;
    int og=num;

    while(num!=0){
    rem=num%10;

    if(rem==0)
    continue;
    else if(og%rem==0){
    count++;
    }
    num=num/10;
    }
    
    return count;
        
    }
};