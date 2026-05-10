class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum =0;
        int n = nums.size();
        //yaha pe hm pure array jo already given hai uss ak sum nikalenge
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
        }
        
        int totalSum = ((n)*(n+1))/2;
        //aur yaha pe total sum me se usse subtract kareneg
        int ans = totalSum - sum;
        return ans;
    }
};