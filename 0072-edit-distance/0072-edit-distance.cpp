class Solution {
public:
    int check(string a , string b, int i,int j,vector<vector<int>>&dp){
           if(j<0){
            return i+1;
           }
           if(i<0){
            return j+1;
           }
           if(dp[i][j]!=-1){
            return dp[i][j];
           }
           
           if(a[i]==b[j]){
            return dp[i][j] = check(a,b,i-1,j-1,dp);
           }else{
     return  dp[i][j] =  min({(1+check(a,b,i-1,j,dp)),1+check(a,b,i-1,j-1,dp),1+check(a,b,i,j-1,dp)});
           }
    }
    int minDistance(string word1, string word2) {
        int n = word1.size()-1;
        int m = word2.size()-1;
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
             return check(word1,word2,n,m,dp);
    }
};