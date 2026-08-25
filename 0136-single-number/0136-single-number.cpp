class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //Note for Github
        int ans =0;

        for(int x: nums){
            ans ^=x;
        }
        return ans;
    }
};