class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int minelem = 1e9;
        while(low<=high){
            if(nums[low]<=nums[high]){
                return min(nums[low],minelem);
            }
            int mid = low + (high-low)/2;
            if(nums[mid]>=nums[low]){
               minelem = min(minelem,nums[low]);
               low = mid+1;
            }else if(nums[mid]<=nums[high]){
                minelem = min(minelem,nums[mid]);
                high = mid-1;
            }
             
        }
        return minelem;
    }
};