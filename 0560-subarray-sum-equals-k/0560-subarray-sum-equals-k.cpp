class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        //Note for guthub

        //prefix sunm 0 has occurs once
        mp[0]=1;

        int prefixSum =0;
        int count =0;

        for(int x: nums){
            prefixSum +=x;
            //need an earlier prefix sum = prefixsum -k
            if(mp.find(prefixSum -k)!= mp.end()){
                count +=mp[prefixSum -k];
            }
            //store current prefix sum
            mp[prefixSum]++;
        }
        return count;
        
    }
};