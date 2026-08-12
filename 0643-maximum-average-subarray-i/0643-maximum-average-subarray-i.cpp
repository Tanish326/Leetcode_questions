class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        double ans = -1e9;
        int sum = 0;
        while(j<n){
           
            sum = sum + nums[j];
          
            while((j-i+1)>k){
                sum = sum - nums[i];
                i++;
                
            }
            if((j-i+1)==k){
             if((double)sum/k>ans){
                ans = (double)sum/k;
            }}
            j++;
        }
        return ans;
    }
};