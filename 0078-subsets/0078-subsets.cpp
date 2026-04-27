class Solution {
public:
    void check(vector<vector<int>>&ans,vector<int>&nums,int i,vector<int>&a){
        if(i==nums.size()){
            ans.push_back({a});
            return;
        }
        a.push_back(nums[i]);
        check(ans,nums,i+1,a);
        a.pop_back();
        check(ans,nums,i+1,a);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        vector<int>a;
        check(ans,nums,0,a);
        return ans;
    }
};