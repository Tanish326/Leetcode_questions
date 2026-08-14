class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {    int n = nums.size();
            int minsum = 1e9;
        for(int i=0;i<n;i++){
           int sum = 0;
           for(int j=i;j<n;j++){
            sum = sum + nums[j];
            int len = j-i+1;
            if(len>=l && len<=r){
                 if(sum>0){
                    minsum = min(minsum,sum);
                 }
            }
           }
        }
        if(minsum==1e9){
            return -1;
        }
        return minsum;
        
    }
};