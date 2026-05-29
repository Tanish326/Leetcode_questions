class Solution {
public:
   int check(int n){
    int sum = 0;
    while(n>0){
        sum = sum + n%10;
        n = n/10;
    }
    return sum;
   }
    int minElement(vector<int>& nums) {
        int minelem = INT_MAX;
        int n = nums.size();
        for(int i=0;i<n;i++){
            nums[i] = check(nums[i]);
            minelem = min(minelem,nums[i]);
        }
        return minelem;
    }
};