class Solution {
public:
    long long check(vector<int>& nums, int val) {
        long long count = 0;
        for (int x : nums) {
            count += (x - 1) / val;
        }
        return count;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int n = nums.size();
        int l = 1;
        int h = nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>h){
                h = nums[i];
            }
        }
        int ans = 0;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(check(nums,mid)<=maxOperations){
                ans = mid;
                h = mid-1;
               

            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};