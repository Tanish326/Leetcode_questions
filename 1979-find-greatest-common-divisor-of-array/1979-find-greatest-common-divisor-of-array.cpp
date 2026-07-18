class Solution {
public:
    int gcd(int a,int b){
          int ans = 0;
        for(int i=1;i<=min(a,b);i++){
          
            if(a%i==0 && b%i==0){
                ans = i;
            }
        }
        return ans;
    }
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int minelem = 1e9;
        int maxlem = -1e9;
        for(int i=0;i<n;i++){
            maxlem = max(maxlem,nums[i]);
            minelem = min(minelem,nums[i]);
        }
        return gcd(minelem,maxlem);
    }
};