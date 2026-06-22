class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
        vector<int>negative;
        vector<int>ans(0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }else{
                negative.push_back(nums[i]);
            }
        }
        int c =0;
        int d =0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
            ans.push_back(positive[c++]);}
            else{
                ans.push_back(negative[d++]);
            }
        }
        return ans;
    }
};