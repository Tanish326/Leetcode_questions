class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //take four pointers 
        // top , left , right and bottom 
        // sprial direction is first from left to right
        // then to top to bottom
        // then right to left 
        // then bottom to top 
        // do this till left > right or bottom < top
       int m = matrix.size();
       int n = matrix[0].size();
       vector<int>ans;
        int left = 0;
        int right = n-1;
        int top = 0;
        int bottom = m-1;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int j=top;j<=bottom;j++){
                ans.push_back(matrix[j][right]);
            }
            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;}
            if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;}
        }
        return ans;
    }
};