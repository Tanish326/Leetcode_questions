class Solution {
public:
    int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
   vector<int>finding_gcd(vector<int>&nums,vector<int>&max_values){
       int n = nums.size();
       vector<int>gcd_values(n);
       for(int i=0;i<n;i++){
           gcd_values[i] = gcd(nums[i],max_values[i]);
       }
       return gcd_values;
   }
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>max_values(n);
        max_values[0] = nums[0];
        for(int i=1;i<n;i++){
            max_values[i] = max(max_values[i-1],nums[i]);
        }
        vector<int>ans;
        long long int  sum = 0;
     ans = finding_gcd(nums,max_values);
        sort(ans.begin(),ans.end());
        for(int i=0;i<n/2;i++){
         sum +=  gcd(ans[i],ans[n-1-i]);
        }
        return sum;
        
    }
};