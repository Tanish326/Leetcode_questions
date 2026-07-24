class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxones = 0;
        int j = 0;
        int count = 0;
        while(j<n){
          if(nums[j]==1){
              count++;
             maxones = max(maxones,count);
            }else{
                 
                count = 0;
            }
            j++;
        }
        return maxones;
    }
};