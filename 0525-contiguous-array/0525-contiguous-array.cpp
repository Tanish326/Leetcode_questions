class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int>mpp;
        mpp[0] = -1;
        int pref = 0;
        int maxlen = -1e9;
         for(int i=0;i<n;i++){
            if(nums[i]==0){
                pref = pref + -1;
            }else{
                pref = pref + 1;
            }
            if(mpp.find(pref)!=mpp.end()){
                maxlen = max(maxlen,i-mpp[pref]);
            }else{
                mpp[pref] = i;
            }
            
         }
         if(maxlen==-1e9){
            return 0;
         }
         return maxlen;

    }
};