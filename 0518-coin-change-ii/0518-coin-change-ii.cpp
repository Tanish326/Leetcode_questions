class Solution {
public:
    int check(int target,vector<int>&coin,int ind,vector<vector<int>>&dp){
        if(target==0){
            return 1;
        }
        if(ind==coin.size()){
            return 0;
        }
        if(dp[ind][target]!=-1){
            return dp[ind][target];
        }
        int pick = 0;
        if(coin[ind]<= target){
         pick = check(target-coin[ind],coin,ind,dp);}
        int notpick = check(target,coin,ind+1,dp);
        return dp[ind][target] = pick + notpick;
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
          return check(amount,coins,0,dp);
    }
};