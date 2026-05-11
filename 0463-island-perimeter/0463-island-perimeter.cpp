class Solution {
public:
    int check(int r, int c, vector<vector<int>>&grid){
        int rows[] = {0,1,-1,0};
        int cols[] = {1,0,0,-1};
        int count = 0;
        for(int i=0;i<4;i++){
            int nr = r + rows[i];
            int nc = c + cols[i];
            if(nr<grid.size() && nr>=0 && nc<grid[0].size()&& nc>=0 && grid[nr][nc]==1){
                count;
            }else{
                count++;
            }
        }
        return count;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>>visited(n,vector<int>(m,0));
        int area = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !visited[i][j]){
                   area = area + check(i,j,grid);
                }
            }
        }
        return area;
    }
};