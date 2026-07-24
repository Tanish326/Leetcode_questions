class Solution {
public:
   vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {

    sort(nums.begin(), nums.end());

    int n = nums.size();

    vector<long long> prefix(n);
    prefix[0] = nums[0];

    for(int i=1;i<n;i++)
        prefix[i]=prefix[i-1]+nums[i];

    vector<long long> ans;

    for(int q:queries){

        int ind = lower_bound(nums.begin(), nums.end(), q) - nums.begin();

        long long leftSum = (ind==0)?0:prefix[ind-1];
        long long rightSum = prefix[n-1]-leftSum;

        long long left = 1LL*ind*q-leftSum;
        long long right = rightSum-1LL*(n-ind)*q;

        ans.push_back(left+right);
    }

    return ans;
}
};