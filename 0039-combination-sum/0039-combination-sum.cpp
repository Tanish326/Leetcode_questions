class Solution {
public:
    void check(vector<vector<int>>&ans,vector<int>&nums,int target,int i,vector<int>&c){
        if(target<0){
            return;
        }
        if(target==0){
            ans.push_back(c);
            return;
        }
        if(i==nums.size()){
          return;
        }
        c.push_back(nums[i]);
        check(ans,nums,target-nums[i],i,c);
        c.pop_back();
        check(ans,nums,target,i+1,c);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>c;
        check(ans,candidates,target,0,c);
        return ans;
    }
};