class Solution {
public:
    int check(vector<vector<int>>&grid,int i, int j,vector<vector<int>>&dp){
        if(i>=grid.size() || j>= grid[0].size()){
            return 1e9;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(i==grid.size()-1 && j==grid[0].size()-1){
            return grid[i][j];
        }
        return dp[i][j] = grid[i][j] + min(check(grid,i+1,j,dp),check(grid,i,j+1,dp));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return check(grid,0,0,dp);
    }
};