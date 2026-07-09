class Solution {
public:
    long long check(vector<int>&candies,int val){
        long long count = 0;
        for(int i=0;i<candies.size();i++){
            count = count + candies[i]/val;
        }
        return count;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size();
        int l = 1;
        int h = candies[0];
        for(int i=0;i<n;i++){
            if(candies[i]>h){
                h = candies[i];
            }
           
        }
        int ans = 0;
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