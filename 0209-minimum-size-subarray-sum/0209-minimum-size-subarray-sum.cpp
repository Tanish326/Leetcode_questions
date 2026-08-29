class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
            int n = nums.size();
            int minlen = 1e9;
            int i = 0;
            int j = 0;
            int sum = 0;
            while(j<n){
                sum = sum + nums[j];
                while(i<=j && sum>=target){
                    minlen = min(minlen,(j-i+1));
                    sum = sum - nums[i];
                    i++;
                }
                j++;
            }
            if(minlen==1e9){
                return 0;
            }
            return minlen;
    }
};