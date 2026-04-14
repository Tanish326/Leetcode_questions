class Solution {
public:
    int find_max(vector<int>&nums, int i,int j){
        if(i==j){
            return nums[i];
        }
        int maxi = nums[i];
        while(i<=j){
            if(nums[i]>maxi){
                maxi = nums[i];
            }
            i++;
        }
        return maxi;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>dp(n+1,0);
        dp[n] = 0;
      
      
        for(int i=n-1;i>=0;i--){
              int sum = 0;
              int max_sum = INT_MIN;
            for(int j=i;j< min(n,i+k);j++){
              sum =   find_max(arr,i,j)*(j-i+1) + dp[j+1];
              max_sum = max(max_sum,sum);
            }
            dp[i] = max_sum;
        }
        return dp[0];
    }
};