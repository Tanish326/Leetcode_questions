class Solution {
public:
    long long check(vector<int>&nums,int days,int k){
        int val = k;
        long long count = 0;
        for(int i=0;i<nums.size();i++){
            if(days>=nums[i]){
                val--;
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
        int l = 1;
        int h = bloomDay[0];
        int ans;
        long long v = (long long)m*k;
        if(n<v){
            return -1;
        }
        for(int i=0;i<n;i++){
            if(bloomDay[i]>h){
                h = bloomDay[i];
            }
        }
        while(l<=h){
            int mid = l + (h-l)/2;
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