class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
    int n = nums.size();

    vector<int> pref(n), suff(n);

    pref[0] = nums[0];
    for(int i = 1; i < n; i++)
        pref[i] = max(pref[i-1], nums[i]);

    suff[n-1] = nums[n-1];
    for(int i = n-2; i >= 0; i--)
        suff[i] = min(suff[i+1], nums[i]);

    int ans = 0;

    for(int i = 1; i < n-1; i++) {
        if(pref[i-1] < nums[i] && nums[i] < suff[i+1])
            ans += 2;
        else if(nums[i-1] < nums[i] && nums[i] < nums[i+1])
            ans += 1;
    }

    return ans;
}};