class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        unordered_map<int, vector<int>> pos;

        for (int i = 0; i < nums.size(); i++)
            pos[nums[i]].push_back(i);

        vector<long long> ans(nums.size());

        for (auto &it : pos) {
            vector<int> &v = it.second;
            int m = v.size();

            vector<long long> prefix(m);
            prefix[0] = v[0];

            for (int i = 1; i < m; i++)
                prefix[i] = prefix[i - 1] + v[i];

            long long total = prefix[m - 1];

            for (int i = 0; i < m; i++) {

                long long left = 1LL * i * v[i];
                if (i > 0)
                    left -= prefix[i - 1];

                long long right = (total - prefix[i]) -
                                  1LL * (m - i - 1) * v[i];

                ans[v[i]] = left + right;
            }
        }

        return ans;
    }
};