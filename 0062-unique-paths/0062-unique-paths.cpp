class Solution {
public:
   int check(int m, int n,int ind1, int ind2,vector<vector<int>>&dp){
    if(ind1==m-1 || ind2==n-1){
        return 1;
    }
    if(dp[ind1][ind2]!=-1){
        return dp[ind1][ind2];
    }
   return dp[ind1][ind2] = check(m,n,ind1+1,ind2,dp) + check(m,n,ind1,ind2+1,dp);
   }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return check(m,n,0,0,dp);
    }
};