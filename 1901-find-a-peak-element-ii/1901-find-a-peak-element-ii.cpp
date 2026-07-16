class Solution {
public:
   int find_peak(int col, vector<vector<int>>& mat) {
    int row = 0;

    for (int i = 1; i < mat.size(); i++) {
        if (mat[i][col] > mat[row][col])
            row = i;
    }

    return row;
}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
          int n = mat.size();
          int m = mat[0].size();
          int c0 = find_peak(0,mat);
          if(mat[c0][0]>mat[c0][1]){
            return {c0,0};
          }
          int cm = find_peak(m-1,mat);
          if(mat[cm][m-1]>mat[cm][m-2]){
            return {cm,m-1};
          }
          int l = 1;
          int h = m-2;
          while(l<=h){
            int mid = (l+h)/2;
            int row = find_peak(mid,mat);
            if(mat[row][mid-1]<mat[row][mid] && mat[row][mid+1]<mat[row][mid]){
                return {row,mid};
            }else if(mat[row][mid-1]>mat[row][mid]){
                h = mid-1;
            }else{
                l = mid+1;
            }
          }
          return {0,0};
    }
};