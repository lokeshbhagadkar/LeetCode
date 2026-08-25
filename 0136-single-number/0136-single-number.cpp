class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //Day 7 of maintaining streak
        //Note for Github
        //Date 25 aug 26
        //Understand and dry run properly
        int ans =0;

        for(int x: nums){
            ans ^=x;
        }
        return ans;
    }
};