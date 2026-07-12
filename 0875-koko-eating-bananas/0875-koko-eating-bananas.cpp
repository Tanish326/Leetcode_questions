class Solution {
public:
    long long check(vector<int>&nums,int minval){
        long long count = 0;
        for(int i=0;i<nums.size();i++){
            count = count + ceil((double)nums[i]/minval);
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int i = 1;
        int j = piles[0];
        int ans;
        for(int i=0;i<n;i++){
            if(piles[i]>j){
                j = piles[i];
            }
        }
        while(i<=j){
            int mid = i + (j-i)/2;
            if(check(piles,mid)<=h){
                ans = mid;
                j = mid-1;
            }else{
                i = mid+1;
            }
        }
        return ans;
    }
};