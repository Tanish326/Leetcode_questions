class Solution {
public:
   long long check(vector<int>&nums,int mindiv){
    long long count = 0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        count = count + ceil((double)nums[i]/mindiv);
    }
    return count;
   }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        long long l = 1;
        long long h = (long long)*max_element(nums.begin(),nums.end());
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