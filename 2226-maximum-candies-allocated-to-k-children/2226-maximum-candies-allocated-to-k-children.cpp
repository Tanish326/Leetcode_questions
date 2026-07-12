class Solution {
public:
    long long check(vector<int>&nums,int maxcandies){
        int n = nums.size();
        long long count = 0;
        for(int i=0;i<n;i++){
            count = count + nums[i]/maxcandies;
        }
        return count;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int l = 1;
        int h = candies[0];
        int n = candies.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            if(candies[i]>h){
                h = candies[i];
            }
        }
        while(l<=h){
            int mid = l + (h-l)/2;
            if(check(candies,mid)>=k){
                ans = mid;
                l = mid+1;
            }else{
                h = mid-1;
            }
        }
        return ans;
    }
};