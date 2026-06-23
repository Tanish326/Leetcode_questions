class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
      int r[] = {+1,0,-1,0,+1,-1,+1,-1};
      int c[] = {0,+1,0,-1,+1,-1,-1,+1};
      int n = board[0].size();
      int m = board.size();
      for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            int live = 0;
           for(int k=0;k<8;k++){
            int rows = i + r[k];
            int cols = j + c[k];
            
            if(rows>=0 && rows<m && cols>=0 && cols<n){
            if(board[rows][cols]==1 || board[rows][cols]==2){
                live++;
                
            }
            }

           }
           if(board[i][j]==1){
            if(live<2 || live>3){
                board[i][j] = 2;
            }
           }else{
            if(live==3){
                board[i][j] = -1;
            }
           }
        }
      }
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==2){
                board[i][j] = 0;
            }else if(board[i][j]==-1){
                board[i][j] = 1;
            }
        }
      }
    }
};