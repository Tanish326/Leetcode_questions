class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
          int n = grid.size();
          int m = grid[0].size();
        
          vector<int>ans;
          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans.push_back(grid[i][j]);
            }
          }
          int len = ans.size();
          k = k%len;
          reverse(ans.begin(),ans.end());
          reverse(ans.begin(),ans.begin()+k);
          reverse(ans.begin()+k,ans.end());
          int c = 0;
          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j] = ans[c++];
            }
          }
        return grid;
    }
};