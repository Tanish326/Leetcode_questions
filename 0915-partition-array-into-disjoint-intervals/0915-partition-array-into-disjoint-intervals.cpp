class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        vector<int>pref(n);
        vector<int>suff(n);
        pref[0] = nums[0];
        for(int i=1;i<n;i++){
         pref[i] = max(pref[i-1],nums[i]);
        }
        suff[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i] = min(suff[i+1],nums[i]);
        }
        for(int i=0;i<n;i++){
            if(pref[i]<=suff[i+1]){
                return i+1;
            }

    
        }
        return 0;
    }
};