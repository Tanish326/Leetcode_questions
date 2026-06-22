class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = prices[0];
        int maxprof = -1e9;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buy){
                buy = prices[i];
            }
            profit = prices[i] - buy;
            maxprof = max(maxprof,profit);
        }
        return maxprof;
    }
};