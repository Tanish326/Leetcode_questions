class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size(); 
        long long sum = 0;
        int i = 0;
        int j = 0;
        unordered_map<int,int>mpp;
        long long maxsum = 0;
        while(j<n){
                mpp[nums[j]]++;
                sum = sum + nums[j];
            
            while(i<n && (j-i+1)>k){
                sum = sum - nums[i];
                 mpp[nums[i]]--;
                if(mpp[nums[i]]==0){
                    mpp.erase(nums[i]);
                }
                i++;
            }
            if((j-i+1)==k && mpp.size()==k){
                if((sum)>maxsum){
                    maxsum = sum;
                }
            }
            j++;
        }
        return maxsum;
    }
};