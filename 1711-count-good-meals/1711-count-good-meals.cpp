class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        
        int n = deliciousness.size();
       long long count = 0;
         unordered_map<int,int>mpp;
      for(int i=0;i<n;i++){
       
          for(int k=0;k<=21;k++){
            int target = pow(2,k);
            if(mpp.find(target- deliciousness[i])!=mpp.end()){
                count = count + mpp[target- deliciousness[i]];
            }
              
            
          }
            mpp[deliciousness[i]]++;
        }
      
const long long MOD = 1e9 + 7;

return count % MOD;
    }
};