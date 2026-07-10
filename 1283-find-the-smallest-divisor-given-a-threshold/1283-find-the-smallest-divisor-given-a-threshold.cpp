class Solution {
public:
    int check(vector<int>&nums,int val){
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = sum + ceil((double)nums[i]/val);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
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
            if(check(nums,mid)<=threshold){
             ans = mid;
             h = mid-1;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};