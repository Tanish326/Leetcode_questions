class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int pref = 0;
        unordered_map<int,int>mpp;
        mpp[0] = -1;
        for(int i=0;i<n;i++){
            pref = pref + nums[i];
            if(mpp.find(pref%k)!=mpp.end()){
                if(i-mpp[pref%k]>=2){
                    return true;
                }

            }
            if(mpp.find(pref%k)==mpp.end()){
                mpp[pref%k] = i;
            }

        }
        return false;
    }
};