class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
          int i = text1.size();
          int j = text2.size();
          vector<vector<int>>dp(i+1,vector<int>(j+1,-1));
          for(int i=0;i<text1.size();i++){
            dp[i][0] = 0;
          }
          for(int i=0;i<text2.size();i++){
            dp[0][i] = 0;
          }
       for(int a=1;a<=i;a++){
        for(int b=1;b<=j;b++){
            if(text1[a-1]==text2[b-1]){
                dp[a][b] = 1 + dp[a-1][b-1];
            }else{
                dp[a][b] = max(dp[a-1][b],dp[a][b-1]);
            }
        }
       }
       return dp[i][j];
    }
};