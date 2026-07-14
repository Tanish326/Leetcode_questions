class Solution {
public:
    int check(vector<int>&nums,int maxsum){
        int subar = 1;
        int sum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if((sum+nums[i])<=maxsum){
                sum = sum + nums[i];
            }else{
                subar++;
                sum = nums[i];
            }
        }
        return subar;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int l = *max_element(nums.begin(),nums.end());
        int h = 0;
        for(int i=0;i<n;i++){
            h = h + nums[i];
        }
        int ans;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(check(nums,mid)<=k){
                ans = mid;
                h = mid-1;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};