class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
          int count = 0;
          int maxones = -1e9;
          int n = nums.size();
          for(int i=0;i<n;i++){
            if(nums[i]==0){
                count = 0;
            }else{
                count++;
            }
            maxones = max(maxones,count);
          }
          return maxones;
    }
};