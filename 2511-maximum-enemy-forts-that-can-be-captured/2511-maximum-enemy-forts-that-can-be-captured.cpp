class Solution {
public:
    int captureForts(vector<int>& forts) {
        int n = forts.size();
        int prev = -1;
        int maxcount = 0;
        for(int i=0;i<n;i++){
            if(forts[i]!=0){
                if(prev!=-1 && forts[prev]!=forts[i]){
                  maxcount = max(maxcount,i-prev-1);
                }
                prev = i;
            }
        }
        return maxcount;
    }
};