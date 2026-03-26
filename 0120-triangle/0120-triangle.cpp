class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int m = 1;
        for(int i=0;i<n;i++){
            if(triangle[i].size()>m){
                m = triangle[i].size();
            }
        }
       vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
       for(int i=0;i<triangle[n-1].size();i++){
        dp[n-1][i] = triangle[n-1][i];
       }
       for(int i=n-2;i>=0;i--){
        for(int j = 0;j<triangle[i].size();j++){
            int d = dp[i+1][j];
            int dg = dp[i+1][j+1];
            dp[i][j] = triangle[i][j] + min(d,dg);
        }
       }
       return dp[0][0];
    }
};