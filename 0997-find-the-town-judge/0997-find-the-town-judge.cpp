class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>>adj(n+1,vector<int>(n+1,0));
        for(auto &k : trust){
            int i = k[0];
            int j = k[1];
            adj[j][i] = 1;
           
        }
       
        for(int i=1;i<=n;i++){
            int count = 0;
            int ans = 0;
            for(int j=1;j<=n;j++){
                
                if(adj[i][j]==1){
                 count =  count + 1;
                  
                }
            }
            if(count==n-1){
              for(int k=1;k<=n;k++){
                if(k!=i){
                    if(adj[k][i]==1){
                        return -1;
                    }
                }
              }
              return i;
            }
        }
        return -1;
    }
};