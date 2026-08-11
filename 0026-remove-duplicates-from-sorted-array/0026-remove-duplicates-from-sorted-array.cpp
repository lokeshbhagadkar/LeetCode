class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        //removing duplicate from an array

        for(int j=1;j<nums.size();j++){
            //loop to iterate via array
            if(nums[j]!= nums[i]){
                //incrementing i
                i++;
                //comparing i and j
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};