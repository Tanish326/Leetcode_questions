class Solution {
public:
  int  check(vector<int>&coin,int amount, int ind,vector<vector<int>>&dp){
     
        if(ind==coin.size()-1){
            if(amount%coin[ind]==0){
                return amount/coin[ind];
            }else{
                return 1e9;
            }
        }
           if(dp[ind][amount]!=-1){
            return dp[ind][amount];
        }

        int take = 1e9;
        if(amount>= coin[ind]){
            take = 1 + check(coin,amount-coin[ind],ind,dp);
        }
        int notake = check(coin,amount,ind+1,dp);
          return  min(take,notake);
   }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans = check(coins,amount,0,dp);
        if(ans >=1e9){
            return -1;
        }
        return ans;
    }
};