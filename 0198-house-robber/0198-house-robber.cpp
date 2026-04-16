class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,0);
        dp[0] = nums[0];
        dp[1] = max(nums[1],nums[0]);
        int maxi = INT_MIN;
        for(int i=2;i<n;i++){
            int take = nums[i] + dp[i-2];
            int nottake = dp[i-1];
            dp[i] = max(take,nottake);
    
        }
        return dp[n-1];
    }
};