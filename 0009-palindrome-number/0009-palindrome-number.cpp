class Solution {
public:
    bool isPalindrome(int x) {
        long int revNum=0;
        int dup = x;
        if(x<0){
            return false;
        }
        while(x > 0){
            int digit = x%10;
            revNum = (revNum*10)+ digit;
            x = x/10;
        }
        
        return dup==revNum;
    }
};