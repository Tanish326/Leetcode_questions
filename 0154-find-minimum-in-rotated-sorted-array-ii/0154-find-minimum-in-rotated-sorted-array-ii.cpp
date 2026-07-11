class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int h = n-1;
        int minelem = 1e9;
        while(l<=h){
            if(nums[l]<nums[h]){
          minelem = min(minelem,nums[l]);
          return minelem;
            }
            int mid = l + (h-l)/2;
            minelem = min(minelem,nums[mid]);
         if(nums[mid]==nums[h] && nums[l]==nums[mid]){
                    l++;
                    h--;
                    continue;
                }
            if(nums[mid]>=nums[l]){
                minelem = min(minelem,nums[l]);
                l = mid+1;
            }else{
                
                minelem = min(minelem,nums[mid]);
                h = mid-1;
            }
        }
        return minelem;
    }
};