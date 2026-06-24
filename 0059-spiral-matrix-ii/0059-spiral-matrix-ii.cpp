class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
         int left = 0;
         int right = n-1;
         int top = 0;
         int bottom = n-1;
         int val = 1;
              while(left<=right && top<=bottom){
         if(val<=n*n){
          for(int i=left;i<=right;i++){
                ans[top][i] = val;
                val = val + 1;
          }
          top++;}
          if(val<=n*n){
          for(int i=top;i<=bottom;i++){
            ans[i][right] = val;
            val = val + 1;
          }
          right--;}
          if(top<=bottom && val<=n*n){
          for(int i=right;i>=left;i--){
            ans[bottom][i] = val;
            val = val + 1;
          }
          bottom--;}
          if(left<=right && val<=n*n){
          for(int i=bottom;i>=top;i--){
            ans[i][left] = val;
            val = val + 1;
          }
          left++;}}
          return ans;
         
    }
};