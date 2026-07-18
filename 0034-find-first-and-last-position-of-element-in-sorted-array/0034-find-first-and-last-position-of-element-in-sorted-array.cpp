class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lower = n;
 lower = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
int higher = upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(lower==n || nums[lower]!=target){
            return {-1,-1};
        }
        return {lower,higher-1};
    }
};