class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int n = nums.size();
         int sum = 0;
         int i = 0;
         int j = 0;
         int minlen = 1e9;
         while(j<n){
            sum = sum + nums[j];
            while(i<n && sum>target){
                if((sum-nums[i])<target){
                    break;
                }
                sum = sum - nums[i];
                i++;
            }
           if(sum>=target){
           minlen = min(minlen,(j-i+1));}
            j++;
         }
         if(minlen==1e9){
            return 0;
         }
         return minlen;

    }
};