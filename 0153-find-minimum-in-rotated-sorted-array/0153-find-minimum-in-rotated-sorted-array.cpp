class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int minelem = 1e9;
        int j = n-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[i]<=nums[mid] && nums[mid]<=nums[j]){
                minelem = min(minelem,nums[i]);
            }

            if(nums[mid]>=nums[i]){
               minelem = min(minelem,nums[i]);
               i = mid+1;
            }else if(nums[mid]<=nums[j]){
                minelem = min(minelem,nums[mid]);
                j = mid-1;
            }
        }
        return minelem;
    }
};