class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n);

        for(int index=0;index<n;index++){
            int newIndex = (index + k) %n;
            //hm new array create krr ke uss me elements ad krr rahe hai
            ans[newIndex] = nums[index];
        }

        //as hame kaha gaya hai ki new array nahi banana hai so 
        // we need to copy it to original one
        //as hmme ye bhi nahi bola ki yaha pe return karna hai so we need to copy it
        nums = ans;
        
    }
};