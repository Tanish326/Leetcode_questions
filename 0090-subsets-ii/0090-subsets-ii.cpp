class Solution {
public:
    set<vector<int>>st;
     void check(vector<vector<int>>&ans,vector<int>&nums,int i,vector<int>&a){
        if(i==nums.size()){
            if(st.find(a)==st.end()){
                st.insert(a);
            ans.push_back({a});
            }
            return;
        }
        a.push_back(nums[i]);
        check(ans,nums,i+1,a);
        a.pop_back();
        check(ans,nums,i+1,a);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>a;
        sort(nums.begin(),nums.end());
        check(ans,nums,0,a);
        return ans;
    }
};