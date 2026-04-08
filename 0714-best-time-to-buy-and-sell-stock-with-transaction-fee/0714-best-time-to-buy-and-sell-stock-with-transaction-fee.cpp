class Solution {
public:
      int check(vector<vector<int>>&dp,vector<int>&prices,int ind,int buy,int fee){
        if(ind>=prices.size()){
            return 0;
        }
        if(dp[ind][buy]!=-1){
            return dp[ind][buy];
        }
        long profit = 0;
        if(buy){
        profit = max(-prices[ind] + check(dp,prices,ind+1,0,fee),check(dp,prices,ind+1,1,fee));
        }else{

 profit = max(prices[ind]-fee + check(dp,prices,ind+1,1,fee),check(dp,prices,ind+1,0,fee));
        }
        return dp[ind][buy] = profit;
    }

 
    int maxProfit(vector<int>& prices, int fee) {
        
        int n = prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return check(dp,prices,0,1,fee);
    }
};