class Solution {
public:
   long long check(vector<int>&nums,int mindays,int k){
     long long count = 0;
    int n = nums.size();
    int val = k;
    for(int i=0;i<n;i++){
        if(nums[i]<=mindays){
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
          long long val = (long long)m*k;
          if(val>n){
            return -1;
          }
          long long l = 1;
          long long h = (long long)*max_element(bloomDay.begin(),bloomDay.end());
          int ans = 0;
          while(l<=h){
            long long mid = l + (h-l)/2;
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