class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = 0;
        long long  count = 0;
        int maxfreq = 0;
        while(j<n){
            count =(long long)(count + nums[j]);
            while(((long long)(nums[j])*(j-i+1) - count)> k){
                count = count - nums[i];
                i++;
            }
            maxfreq = max(maxfreq,(j-i+1));
            j++;
        }
        return maxfreq;
    }
};