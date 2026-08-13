class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int minoperations = 1e9;
        if(n==1){
            if(blocks[0]=='W'){
                return 1;
            }else{
                return 0;
            }
        }
        for(int i=0;i<=n-k;i++){
            int count = 0;
            for(int j=0;j<k;j++){
                if(blocks[i+j]=='W'){
                    count++;
                }


            }
            minoperations = min(minoperations,count);
        }
        return minoperations;
    }
};