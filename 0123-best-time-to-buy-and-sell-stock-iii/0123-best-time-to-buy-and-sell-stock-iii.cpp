class Solution {
public:
   
    int check(vector<vector<vector<int>>>&dp,vector<int>&prices,int ind,int buy,int count){
        if(count==0){
         return 0;
        }
        if(ind==prices.size()){
            return 0;
        }
        if(dp[ind][buy][count]!=-1){
            return dp[ind][buy][count];
        }
        long profit = 0;
       
        if(buy){
            profit = max(-prices[ind] + check(dp,prices,ind+1,0,count),check(dp,prices,ind+1,1,count));

        }else{
            profit = max(prices[ind] + check(dp,prices,ind+1,1,count-1),check(dp,prices,ind+1,0,count));
        }
        return dp[ind][buy][count] = profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
 vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1)));
        return check(dp,prices,0,1,2);
        
    }
};