class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //this is agin  solve to miantai streak
        //this is agaon day 2 of maintainig streak
        //date 18 aug 26 
        //understand question and resolve properly
        int j =0;
        for(int i=0;i< nums.size();i++){
            if(nums[i] !=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        
    }
};