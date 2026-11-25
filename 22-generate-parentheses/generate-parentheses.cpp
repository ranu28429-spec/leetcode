class Solution {
public:

   void pare(int n, int left, int right, vector<string>&ans, string temp){
    if(left+right == 2*n){
        ans.push_back(temp);
        return;
    }

    // left
    if(left<n){
        temp.push_back('(');
        pare(n,left+1,right,ans,temp);
        temp.pop_back();
    }
    // right
    if(right<left){
        temp.push_back(')');
        pare(n,left,right+1,ans,temp);
        temp.pop_back();
    }
   }
    vector<string> generateParenthesis(int n) {
        int left=0,right=0;
        vector<string>ans;
        string temp;

        pare(n,left,right,ans,temp);
        return ans;
    }
};