class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = i+1;
        while(i<j && j<n){
            if(nums[i]==nums[j]){
                nums[i] = nums[i]*2;
                nums[j] = 0;
            }
            i++;
            j++;
        }
        vector<int>ans(n,0);
        int c = 0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                ans[c++] = nums[i];
            }
        }
        return ans;
    }
};