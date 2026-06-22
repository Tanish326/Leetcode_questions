class Solution {
public:
    void check(int i, vector<int>& nums, vector<int>& ans){
    if(i >= nums.size()-1){
        return;
    }

    int diff = nums[i+1] - nums[i];

    if(diff == 0){
        check(i+1, nums, ans);
    }
    else if(ans.empty()){
        ans.push_back(diff);
        check(i+1, nums, ans);
    }
    else{
        if((diff > 0 && ans.back() < 0) || 
           (diff < 0 && ans.back() > 0)){
            ans.push_back(diff);
        }

        check(i+1, nums, ans);
    }
}

int wiggleMaxLength(vector<int>& nums) {
    if(nums.size()==1) return 1;

    vector<int> ans;
    check(0, nums, ans);

    return ans.size()+1;
}
};