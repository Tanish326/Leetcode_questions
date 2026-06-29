class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int pref = 0;
        unordered_map<int,int>mpp;
int  n = nums.size();
int count = 0;
       mpp[0] = 1;
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