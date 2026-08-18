class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        //this is note fpr Leetcode
        //date 18/08/26 this is again day 2 of maintaining streak 
        

        int i = n-2;
        while(i>=0 && nums[i] >=nums[i+1]){
            i--;
        }

        if(i>=0){
            int j = n-1;
            while(nums[j]<= nums[i]){
                j--;
            }
            swap(nums[i],nums[j]);
        }
        reverse(nums.begin()+i+1, nums.end());
        
    }
};