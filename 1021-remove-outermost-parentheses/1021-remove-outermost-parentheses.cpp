class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int depth =0;
        //this note is for leetcode
        //this is day 5 of maintaining steeak
        
        
        for(char c : s){
            if(c == '('){
                //add ( only iif it is not the outermost)

                if(depth > 0)
                 ans +=c;
                 depth++;
            }
            else{
                                //add ) only iif it is not the outermost)

                depth--;

                if(depth > 0){
                    ans +=c;
                }
            }
        }
        return ans;

        
    }
};