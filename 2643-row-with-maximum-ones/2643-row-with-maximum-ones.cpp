class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        //jo vector hme written karna hai wo hao ye
        vector<int> ans;
        int n = mat.size();
        //oneCount -> will store max numbe of 1's in a row
        int oneCount = INT_MIN;
        //rowNo -> will store index of max no. of 1's wali row;
        int rowNo = -101; //i can store -1 too

        for(int i=0;i<n;i++){
            //hrr row start hone se pahle initialize to 0
            int count =0;
            for(int j=0;j<mat[i].size();j++){
                //if 1 found then increment count
                if(mat[i][j] == 1){
                    count++;
                }
                // /after row completion, compare count with oneCount
                if(count > oneCount){
                    oneCount = count;
                    rowNo =i;
                }
            }

        }
        //check yaha pe hamse kaha gaya thaa ki vector return karo so
        //upar hmne vector declare kiya and yaha pe return kiya !
        ans.push_back(rowNo);
        ans.push_back(oneCount);
        return ans;
    }

        
    
};