class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //this code is done on 17 aug
        //also done to maintain streat /
        //make sure 
        int minPrice = prices[0];
        int maxProfit =0;

        for(int i=1;i<prices.size();i++){
            minPrice = min(minPrice, prices[i]);

            maxProfit = max(maxProfit, prices[i]-minPrice);
        }
        return maxProfit;

        
    }
};