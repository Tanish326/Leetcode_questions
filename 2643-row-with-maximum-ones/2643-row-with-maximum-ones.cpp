class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int row = -1;
        vector<int>ans;
        int maxones = -1e9;
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count>maxones){
                 row = i;
                 maxones = count;
                
            }
        }
     
        return {row,maxones};
    }
};