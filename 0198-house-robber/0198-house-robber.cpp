class Solution {
public:
     int robber(int ind,int n,vector<int>&dp,vector<int>&nums){
        if(ind>=n){
            return 0;
        }
        if(ind==n-1){
            return nums[ind];
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
         int take = nums[ind] + robber(ind+2,n,dp,nums);
         int nottake = robber(ind+1,n,dp,nums);
         return dp[ind] = max(take,nottake);
     }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
       int a = robber(0,n,dp,nums);
           return a;
    }
};