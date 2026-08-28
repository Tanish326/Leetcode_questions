class Solution {
public:
   int minLength(vector<int>& nums, int k) {

    int n = nums.size();

    int i = 0;
    long long sum = 0;
    int minlen = INT_MAX;

    unordered_map<int, int> mpp;

    for (int j = 0; j < n; j++) {

        // Add nums[j]
        mpp[nums[j]]++;

        // First occurrence -> add to distinct sum
        if (mpp[nums[j]] == 1) {
            sum += nums[j];
        }

        // Try to shrink
        while (sum >= k) {

            minlen = min(minlen, j - i + 1);

            // Remove nums[i]
            mpp[nums[i]]--;

            // Completely removed -> subtract from distinct sum
            if (mpp[nums[i]] == 0) {
                sum -= nums[i];
            }

            i++;
        }
    }

    return minlen == INT_MAX ? -1 : minlen;
}
};