class Solution {
public:
    int check(string a , string b, int i, int j,vector<vector<int>>&dp){
        if(j==-1){
            return 1;
        }
        if(i<0 && j>=0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(a[i]==b[j]){
            return dp[i][j] = check(a,b,i-1,j-1,dp) + check(a,b,i-1,j,dp);
        }else{
            return dp[i][j] = check(a,b,i-1,j,dp);
        }
    }
    int numDistinct(string s, string t) {
        int n = s.size()-1;
        int m = t.size()-1;
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return check(s,t,n,m,dp);
    }
};