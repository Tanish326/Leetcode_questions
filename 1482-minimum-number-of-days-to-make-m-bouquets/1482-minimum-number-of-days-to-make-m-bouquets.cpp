class Solution {
public:
    long long check(vector<int>&nums,int mindays,int k){
        int n = nums.size();
        long long count = 0;
        int val = k;
        for(int i=0;i<n;i++){
           
            if(mindays>=nums[i]){
                val = val-1;
                if(val==0){
                count = count + 1;
                val = k;
            }
            }else{
                 val = k;
            }
        }
        return count;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long val = (long long)m*k;
        if(val>n){
            return -1;
        }
        int l = 1;
        int h = bloomDay[0];
        for(int i=0;i<n;i++){
            if(bloomDay[i]>h){
                h = bloomDay[i];
            }
        }
        int ans = -1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(check(bloomDay,mid,k)>=m){
                ans = mid;
                h = mid-1;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};