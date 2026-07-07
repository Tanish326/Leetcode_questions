class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int n = nums.size();
        int l = 0;
        int h = n-1;
        while(l<=h){
            int mid = (l+h)/2;
            if(nums[mid]>=k){
                ans = mid;
                h = mid-1;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};