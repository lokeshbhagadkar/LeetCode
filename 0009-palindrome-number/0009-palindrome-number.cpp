class Solution {
public:
    bool isPalindrome(int x) {
        //yaha pe long int lene ka karan
        //revNum = (revNum*10)+ digit; yaha pe overflow ho raha tha
        long int revNum=0;
        int dup = x;
        //as mention in edgecase
        if(x<0){
            return false;
        }
        while(x > 0){
            int digit = x%10;
            revNum = (revNum*10)+ digit;
            x = x/10;
        }
        
        //ye logic me dhyan dena
        //jabb compare karege and it will return 0 or 1
        return dup==revNum;
    }
};