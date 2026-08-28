class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        int sum = 0;
        int i = 0;
        int j = 0;
        int minlen = 1e9;
        while(j<n){
            if(mpp.find(nums[j])==mpp.end()){
                sum = sum + nums[j];
               
            }
            mpp[nums[j]]++;
            while(i<=j && sum>=k){
                minlen = min(minlen,(j-i+1));
                mpp[nums[i]]--;
                if(mpp[nums[i]]==0){
                    sum = sum - nums[i];
                    mpp.erase(nums[i]);
                }
                i++;
            }
            j++;
        }
        if(minlen==1e9){
            return -1;
        }
        return minlen;
    }
};