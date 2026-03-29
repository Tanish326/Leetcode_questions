class Solution {
public:
    int uniquePaths(int m, int n) {
          vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
          for(int i=0;i<m;i++){
            dp[i][0] = 1;
          }
          for(int i=0;i<n;i++){
            dp[0][i] = 1;
          }
          for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                int down = 0;
                if(i>0){
                 down = dp[i-1][j];}
                int right = dp[i][j-1];
                dp[i][j] = right + down;
            }
          }
          return dp[m-1][n-1];
    }
};