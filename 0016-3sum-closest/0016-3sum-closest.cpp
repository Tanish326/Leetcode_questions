class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
           int mindiff = 1e9;
           int ans;
           sort(nums.begin(),nums.end());
            for(int i=0;i<n;i++){
                if(i>0 && nums[i]==nums[i-1]){
                    continue;
                }
            int j = i+1;
            int k = n-1;
                while(j<k){
                    int sum = nums[i] + nums[j] + nums[k];
                    int rem = abs(sum-target);
                   if(rem<mindiff){
                    mindiff = rem;
                    ans = sum;}
                    if(sum>target){
                       k--;
                     }else if(sum<target){
                        j++;
                     }else{
                        return sum;
                     }
                   
                }
            }
            return ans;
    }
};