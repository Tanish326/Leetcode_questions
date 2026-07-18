class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        int i = 0;
        int j = n-1;
        int minelem = 1e9;
        while(i<=j){
            if(nums[i]<nums[j]){
                minelem = min(minelem,nums[i]);
            }
            int mid = (i+j)/2;
            if(nums[i]==nums[mid] && nums[mid]==nums[j]){
                minelem = min(minelem,nums[mid]);
                i++;
                j--;
                continue;
            }
           if(nums[i]<=nums[mid]){
            minelem = min(minelem,nums[i]);
            i = mid+1;
           }else{
            minelem = min(minelem,nums[mid]);
            j  = mid-1;
           }
        }
        return minelem;
    }
};