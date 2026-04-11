class Solution {
public:
    bool check(string a, string b, int ind1, int ind2){
        if(a.size()!= b.size()+1){
            return false;
        }
          int count = 0;
        while(ind1>=0){
          
            if( ind2>=0 && a[ind1]==b[ind2]){
                ind1--;
                ind2--;
            }else{
                count++;
                ind1--;
            }
        }
        if(count>1){
            return false;
        }
        return true;
        
    }
   static bool comp(string a, string b){
        return a.size()<b.size();
    }
    int longestStrChain(vector<string>& words) {
         int n = words.size();
         if(n==1){
            return 1;
         }
            sort(words.begin(),words.end(),comp);
         vector<int>dp(n,1);
      
         int maxi = INT_MIN;
         for(int i=1;i<n;i++){
            for(int j = 0;j<i;j++){
            if(check(words[i],words[j],words[i].size()-1,words[j].size()-1) && 1 + dp[j]> dp[i]){   
                     dp[i] = 1 + dp[j];
            }}
            maxi = max(maxi,dp[i]);
         }
         return maxi;
    }
};