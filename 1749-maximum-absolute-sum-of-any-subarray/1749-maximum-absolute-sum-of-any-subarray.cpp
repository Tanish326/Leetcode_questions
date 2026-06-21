class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int minsum = 1e9;
        int maxsum = -1e9;
        int sum = 0;
        for(int i=0;i<n;i++){
         sum = sum + nums[i];
         maxsum = max(maxsum,sum);
         if(sum<0){
            sum = 0;
         }
        }
        int sum1 = 0;
        for(int i=0;i<n;i++){
            sum1 = sum1 + nums[i];
            minsum = min(minsum,sum1);
            if(sum1>0){
                sum1 = 0;
            }
        }
        return max(abs(maxsum),abs(minsum));
    }
};