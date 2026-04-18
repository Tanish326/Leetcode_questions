class Solution {
public:
  
    bool check(string s, int ind,int count,vector<vector<bool>>&dp){
        if(count==0){
            return true;
        }
        if(count<0){
            return false;
        }
        if(ind==s.size()){
            return count==0;
        }
        if(dp[ind][count]!=false){
            return dp[ind][count];
        }
        bool a = false,b =  false,c = false;
        if(s[ind]=='('){
           a = check(s,ind+1,count+1,dp);
        }
        if(s[ind]=='*'){
           b = check(s,ind+1,count,dp) || check(s,ind+1,count+1,dp) || check(s,ind+1,count-1,dp);
        }
        if(s[ind]==')'){
            c = check(s,ind+1,count-1,dp);
        }
         return dp[ind][count] =  a || b || c;
    }
    bool checkValidString(string s) {
        
        int n = s.size();
        if(n==1){
            return false;
        }
        vector<vector<bool>>dp(n,vector<bool>(n+1,false));
          return check(s,0,0,dp);
    }
};