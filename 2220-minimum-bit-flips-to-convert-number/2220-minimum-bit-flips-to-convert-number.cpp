class Solution {
public:
    int minBitFlips(int start, int goal) {
        //This note is for github
        //Today is day 7 of maintaining streak 
        //Just push the code
        //Analyze it and dry run properly
        //Note for tomorrow
        //-->make sure to understand and then solve
        int x = start ^ goal;
        int count = 0;

        while (x > 0) {
            count += x & 1;
            x >>= 1;
        }

        return count;
    }
};