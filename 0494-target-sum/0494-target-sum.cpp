class Solution {
public:
  int check(int target, int ind, vector<int>& nums, vector<vector<int>>& dp) {
    if (target == 0) return 1;
    if (ind == nums.size()) return 0;
    if (target < 0) return 0;

    if (dp[ind][target] != -1) return dp[ind][target];

    int take = check(target - nums[ind], ind + 1, nums, dp);
    int nottake = check(target, ind + 1, nums, dp);

    return dp[ind][target] = take + nottake;
}

int findTargetSumWays(vector<int>& nums, int target) {
    int sum = 0;
    for (int x : nums) sum += x;

    if ((sum + target) % 2 != 0 || sum < abs(target)) return 0;

    int s1 = (sum + target) / 2;

    int n = nums.size();
    vector<vector<int>> dp(n, vector<int>(s1 + 1, -1));

    return check(s1, 0, nums, dp);
}};