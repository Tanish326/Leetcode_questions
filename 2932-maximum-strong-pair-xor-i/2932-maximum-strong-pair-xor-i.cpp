class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n = nums.size();
        int maxxor1 = 0;
        for(int i=0;i<n;i++){
            int xor1 = 0;
            for(int j=i;j<n;j++){
                if(abs(nums[i]-nums[j])<=min(nums[i],nums[j])){
                    xor1 = nums[i]^nums[j];
                    maxxor1 = max(maxxor1,xor1);
                }
            }
        }
        return maxxor1;
    }
};