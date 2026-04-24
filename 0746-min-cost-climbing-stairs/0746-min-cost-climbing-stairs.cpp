class Solution {
public:
    int check(vector<int>&cost,int ind,int n,vector<int>&dp){
        if(ind>=n){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
      
        int take1 = cost[ind] + check(cost,ind+1,n,dp);
        int take2 = cost[ind] + check(cost,ind+2,n,dp);
        return dp[ind] =  min(take1,take2);

    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
        return min(check(cost,0,n,dp1),check(cost,1,n,dp2));
    }
};