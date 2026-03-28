class Solution {
public:
    int robber(int ind,int n,vector<int>&dp,vector<int>&nums){         if(ind>=n){
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
        if(n==1){
            return nums[0];
        }
        vector<int>dp1(n+1,-1);
        vector<int>dp2(n+1,-1);
        int take = robber(0,n-1,dp1,nums);
        int notake = robber(1,n,dp,nums);
        return max(take,notake);
    }
};