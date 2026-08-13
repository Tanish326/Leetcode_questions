class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int i = 0;
        int j = 0;
        int count = 0;
        int minoperations = 1e9;
        while(j<n){
              if(blocks[j]=='W'){
                    count++;
                }

            while(i<n && (j-i+1)>k){
                if(blocks[i]=='W'){
                    count--;
                }
                i++;
            }
           
              
         
            if((j-i+1)==k){
               minoperations = min(minoperations,count);
             
            }
            j++;

        }
        return minoperations;
    }
};