class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n==1){
            return 0;
        }
        int i = 0;
        int j = 1;
         int mindiff = 1e9;
        while(j<n){
            
      while((j-i+1)>k){
            i++;
            
         }
        int diff = abs(nums[i]-nums[j]);
        if((j-i+1)==k){
            mindiff = min(mindiff,diff);
        }
        j++;
            
        }
        return mindiff;
    }
};