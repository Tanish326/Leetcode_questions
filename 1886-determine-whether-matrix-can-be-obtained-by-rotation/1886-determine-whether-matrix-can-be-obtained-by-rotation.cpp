class Solution {
public:
       void swap(int *a,int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                 if(j>i){
                    swap(&matrix[i][j],&matrix[j][i]);
                 }
            }
        }
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
    bool check(vector<vector<int>>& mat,vector<vector<int>>& target){
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]!=target[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
          int n1 = mat.size();
          int m1 = mat[0].size();
          int n2 = target.size();
          int m2 = target[0].size();
          if(n1!=n2 || m1!=m2){
            return false;
          }
          for(int i=0;i<4;i++){
            rotate(mat);
            if(check(mat,target)){
                return true;
            }
          }
          return false;
    }
};