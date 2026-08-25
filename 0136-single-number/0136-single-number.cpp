class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //Note for Github
        //Date 25 aug 26
        int ans =0;

        for(int x: nums){
            ans ^=x;
        }
        return ans;
    }
};