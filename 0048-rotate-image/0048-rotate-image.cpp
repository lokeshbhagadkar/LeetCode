class Solution {
public:
    //TC -. O(n^2)
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //transpose step :1 
        for(int i=0;i<n;i++){
            for(int j=i;j<matrix[i].size();j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

            //reverse step 2;
        //reverse --> 2d MATRIX ki sarri row ko
        //kitni row h --> 0 > (n-1)
        for(int i=0;i<n;i++){
            //hr row ko reverse karna h
            reverse(matrix[i].begin(), matrix[i].end());
            //reverse ka code khud se dekh lo-> manual function 
        }


    
        
    }
};