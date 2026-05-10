class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int index =0;
        int left =0;
        int right = n-1;

        while(index <= right){
            if(nums[index] == 0){
                swap(nums[index], nums[left]);
                left++;
                index++;
            }
            else if(nums[index] == 2){
                swap(nums[index], nums[right]);
                right--;
                //catch--> no need of index++
                //index++ 
                //kyu ki hame nahi pata ye swap krr ke 0 bhi bj=he sakta hai start me
            }
            else{
                index++;
                //jab one hoga toh no need to do anything just skip
            }
        }
        
    }
};