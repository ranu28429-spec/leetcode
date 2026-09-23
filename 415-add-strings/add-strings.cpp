class Solution {
public:
    string addStrings(string num1, string num2) {
        int index1=num1.size()-1,index2=num2.size()-1;
        int carry=0,ans;
        string ans2;
      
      while(index1>=0 || index2>=0){
        int x=0,y=0;
     
      if(index1>=0){
      x=num1[index1]-'0';
      }
      if(index2>=0){
      y=num2[index2]-'0';
      }

      ans=x+y+carry;
      carry=ans/10;
      ans2+=ans%10+'0';

      index1--,index2--;

      }
      if(carry>0){
        ans2+=carry+'0';
      }
      reverse(ans2.begin(),ans2.end());
      return ans2;
    }
};