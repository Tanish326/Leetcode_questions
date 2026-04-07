class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minbuy = prices[0];
        int maxprof = INT_MIN;
         int profit = 0;
         for(int i=1;i<n;i++){
            if(prices[i]<minbuy){
                minbuy = prices[i];
            }
            profit = prices[i]-minbuy;
            maxprof = max(maxprof,profit);
         }
         return maxprof;
    }
};