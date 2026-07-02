class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       vector<vector<int>>matrix(n,vector<int>(n,0));
        int left = 0;
        int right = n-1;
        int top = 0;
        int bottom = n-1;
        int val = 1;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                matrix[top][i] = val;
                val = val + 1;
            }
            top++;
            for(int j=top;j<=bottom;j++){
                matrix[j][right]= val;
                val = val +1;
            }
            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                matrix[bottom][i] = val;
                val = val + 1;
            }
            bottom--;}
            if(left<=right){
            for(int i=bottom;i>=top;i--){
               matrix[i][left] = val;
                val = val + 1;
            }
            left++;}
        }
        return matrix;
    }
};