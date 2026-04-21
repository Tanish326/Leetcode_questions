class Solution {
public:

    bool check(string s, string target, int st) {
        if (st + target.size() > s.size()) return false;

        return s.substr(st, target.size()) == target;
    }

    bool check_string(string s, vector<string>& b, int st,vector<int>&dp) {
        if (st == s.size()) {
            return true;
        }
        if(dp[st]!=-1){
            return dp[st];
        }

        for (int i = 0; i < b.size(); i++) {
            if (check(s, b[i], st)) {
                if (check_string(s, b, st + b[i].size(),dp)) {
                   return dp[st] =  true;
                }
            }
        }

      
        return dp[st] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<int>dp(n+1,-1);
        return check_string(s, wordDict, 0,dp);
    }
};