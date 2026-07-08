class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid;
        int ans = 1e9;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]<ans){
                ans = nums[mid];
            }
         if(nums[mid]>=nums[low] && nums[mid]<=nums[high]){
             high = mid-1;
         }else if(nums[mid]>=nums[low]){
            low = mid+1;
         }else{
            high = mid-1;
         }
        }
        return ans;
    }
};