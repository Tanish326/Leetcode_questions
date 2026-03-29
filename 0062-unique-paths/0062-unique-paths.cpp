class Solution {
public:
    int check(int r, int c , int m , int n,vector<vector<int>>&dp){
        if(c>=n || r>=m){
            return 0;
        }
        if(dp[r][c]!=-1){
            return dp[r][c];
        }
        if(r==m-1 && c==n-1){
            return 1;
        }
        int down = check(r+1,c,m,n,dp);
        int right = check(r,c+1,m,n,dp);
        return down + right;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
          return check(0,0,m,n,dp);

        
    }
};