class Solution {
public:
   int check(vector<int>&nums,int ind,int num,vector<vector<int>>&dp ){
    if(ind==nums.size()){
        return 0;
    }
    if(dp[ind][num+1]!=-1){
        return dp[ind][num+1];
    }
  
    int pick = 0;
    int notpick = 0;
     notpick = check(nums,ind+1,num,dp);
       if(num == -1 || nums[ind]>nums[num]){
        pick = 1 + check(nums,ind+1,ind,dp);}
       
    
    return dp[ind][num+1] = max(pick,notpick);
   }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return check(nums,0,-1,dp);
        
    }
};