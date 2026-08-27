class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
         int n = nums.size();
         vector<int>ans(n-k+1,-1);
         int i = 0;
         int j = 0;
         int count = 0;
         while(j<n){
            if(j>0 && nums[j]==nums[j-1]+1){
                count++;
            }else if(j>0 && nums[j]!=nums[j-1]+1){
                i = j;
              
                count = 0;

            }
            while(i<n && (j-i+1)>k){
                if(i+1<n && nums[i]==(nums[i+1]-1)){
                    count--;
                }
                i++;
            }
            if(count==k-1 && (j-i+1)==k){
                ans[i] = nums[j];
            }
            j++;
         }
         return ans;
    }
};