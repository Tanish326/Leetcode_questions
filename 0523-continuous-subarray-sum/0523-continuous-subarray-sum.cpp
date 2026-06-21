class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int pref = 0;
        unordered_map<int,int>mpp;
        mpp[0] = -1;
        if(k==0){
            for(int i=1;i<n;i++){
                if(nums[i]==0 && nums[i-1]==0){
                    return true;
                }
            }
            return false;
        }
        
        for(int i=0;i<n;i++){
            pref = pref + nums[i];
            int rem = pref%k;
            if(mpp.find(rem)!=mpp.end()){
                if(i-mpp[rem]>=2){
                    return true;
                }
            }else{
                mpp[rem] = i;
            }
        }
        return false;
    }
};