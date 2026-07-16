class Solution {
public:
  int find_gcd(int a, int b){
    while(b){
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
 
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        vector<int>prefix(n);
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi = nums[i];
            }
            prefix[i] = find_gcd(maxi,nums[i]);
        }
        sort(prefix.begin(),prefix.end());
      
        long long sum = 0;
         for(int i=0;i<n/2;i++){
            sum = sum + find_gcd(prefix[i],prefix[n-1-i]);
         }
          return sum;
    }
};