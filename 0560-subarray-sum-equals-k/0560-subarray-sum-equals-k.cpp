class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        mpp[0] = 1;
        int count = 0;
      int pref = 0;
        for(int i=0;i<n;i++){
            pref = pref + nums[i];
            if(mpp.find(pref-k)!=mpp.end()){
                count = count + mpp[pref-k];
            }
            mpp[pref]++;
        }
       return count;
    }
};