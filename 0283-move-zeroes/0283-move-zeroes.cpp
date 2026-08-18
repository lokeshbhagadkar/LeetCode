class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //this is agin 
        int j =0;
        for(int i=0;i< nums.size();i++){
            if(nums[i] !=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        
    }
};