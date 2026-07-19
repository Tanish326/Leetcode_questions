class Solution {
public:
    long long check(vector<int>&nums,int minbanana){
        int n = nums.size();
        long long count = 0;
        for(int i=0;i<n;i++){
           count = count + ceil((double)nums[i]/minbanana);
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 1;
        int high = piles[0];
        for(int i=0;i<n;i++){
            if(piles[i]>high){
                high = piles[i];
            }
        }
        int ans = 0;
        while(l<=high){
            int mid = l + (high-l)/2;
            if(check(piles,mid)<=h){
                ans = mid;
                high  = mid-1;
            }else{
                l = mid + 1;
            }
        }
        return ans;
    }
};