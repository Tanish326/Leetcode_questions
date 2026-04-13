class Solution {
public:
    int check(vector<int>&cuts,int i,int j,vector<vector<int>>&dp){
        if(i>j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int mincost = INT_MAX;
        
            int cost;
            for(int ind=i;ind<=j;ind++){
              cost = cuts[j+1]- cuts[i-1] + check(cuts,i,ind-1,dp) + check(cuts,ind+1,j,dp);
              if(cost<mincost){
                mincost = cost;
              }
            }
        
        return dp[i][j] =  mincost;
    }
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        sort(cuts.begin(),cuts.end());
        int m = cuts.size();
        vector<vector<int>>dp(m,vector<int>(m,-1));
        return check(cuts,1,cuts.size()-2,dp);
    }
};