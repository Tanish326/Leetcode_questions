class Solution {
public:

      int check(int r, int c, vector<vector<int>>&dp,vector<vector<int>>&grid,int m,int n){
        if(r>=m || c>=n){
            return INT_MAX;
        }
            if(r==m-1 && c==n-1){
         return grid[r][c];
        }
        if(dp[r][c]!=-1){
            return dp[r][c];
        }
    
        int s1 = check(r+1,c,dp,grid,m,n);
        int s2 = check(r,c+1,dp,grid,m,n);
        return dp[r][c] = grid[r][c] +  min(s1,s2);


      }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return check(0,0,dp,grid,m,n);
    }

};