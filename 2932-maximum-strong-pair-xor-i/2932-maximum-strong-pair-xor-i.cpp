class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int maxxor = -1e9;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
            if(abs(nums[i]-nums[j])<=min(nums[i],nums[j])){
                maxxor = max(maxxor,nums[i]^nums[j]);
            }

            }
        }
        return maxxor;
    }
};