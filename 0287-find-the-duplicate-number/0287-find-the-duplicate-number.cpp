class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int n = nums.size();
      for(int i=0;i<n;i++){
        int ind = abs(nums[i])-1;
        if(nums[ind]<0){
            return abs(nums[i]);
        }else{
            nums[ind] = -1*nums[ind];
        }
      }
      return 0;
    }
};