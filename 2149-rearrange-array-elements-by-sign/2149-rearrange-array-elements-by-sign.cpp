class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>positive;
        vector<int>negative;
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }else{
                negative.push_back(nums[i]);
            }
        }
        int i = 0;
        int j = 0;
        for(int k=0;k<n;k++){
              if(k%2==0){
                ans[k] = positive[i++];
              }else{
                ans[k] = negative[j++];
              }
        }
        return ans;
    }
};