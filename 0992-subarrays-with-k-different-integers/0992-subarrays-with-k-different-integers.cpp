class Solution {
public:
    int atmost(vector<int>&nums,int k){
        int n = nums.size();
        int i = 0;
        int j = 0;
        int count = 0;
        unordered_map<int,int>mpp;
        while(j<n){
            mpp[nums[j]]++;
            while(i<n && mpp.size()>k){
                mpp[nums[i]]--;
                if(mpp[nums[i]]==0){
                    mpp.erase(nums[i]);
                }
                i++;
            }
            if(mpp.size()<=k){
                count = count + (j-i+1);
            }
            j++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return (atmost(nums,k) - atmost(nums,k-1));
    }
};