class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       
        int i = 0;
        int j = 1;
        int k = 0;
        int n = nums.size();
         vector<int>ans(n);
        while(k<n){
            if(nums[k]>0){
                ans[i] = nums[k];
                i = i+2;

            }else{
                ans[j] = nums[k];
                j = j + 2;
            }
            k++;

        }
        return ans;
    }
};