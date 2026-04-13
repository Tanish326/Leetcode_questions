class Solution {
public:
   
    int check(vector<int>&nums,int i,int j,vector<vector<int>>&dp){
        if(i>j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
     
       int maxcost = INT_MIN;
        int cost;
         for(int ind=i;ind<=j;ind++){
            cost = nums[i-1]*nums[ind]*nums[j+1] + check(nums,i,ind-1,dp) + check(nums,ind+1,j,dp);
            maxcost = max(maxcost,cost);
         }
         return dp[i][j] =  maxcost;
    }
    int maxCoins(vector<int>& nums) {
        
        nums.insert(nums.begin(),1);
        nums.push_back(1);
           int n =  nums.size();
           vector<vector<int>>dp(n,vector<int>(n,-1));
        return check(nums,1,n-2,dp);
    }
};