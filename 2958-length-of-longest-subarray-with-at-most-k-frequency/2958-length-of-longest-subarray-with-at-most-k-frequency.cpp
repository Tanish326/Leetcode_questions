class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        int i = 0;
        int j = 0;
        int maxlen = 1;
        while(i<n && j<n){
            mpp[nums[j]]++;
            while(i<n && mpp[nums[j]]>k){
                mpp[nums[i]]--;
                i++;
            }
            maxlen = max(maxlen,j-i+1);
            j++;
        }
        return maxlen;
    }
};