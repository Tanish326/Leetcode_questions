class Solution {
public:
   int check(int r,int c,int m,int n,vector<vector<int>>&grid,vector<vector<int>>&dp){
        if(r>=m || c>=n){
            return 0;
        }
           if(grid[r][c]==1){
            return 0;
        }
        if(r==m-1 && c==n-1){
            return 1;
        }
     
        if(dp[r][c]!=-1){
            return dp[r][c];
        }
      int d =  check(r+1,c,m,n,grid,dp);
      int t =  check(r,c+1,m,n,grid,dp);
      return dp[r][c] = d+t;


     }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
       return check(0,0,m,n,obstacleGrid,dp);

    }
};