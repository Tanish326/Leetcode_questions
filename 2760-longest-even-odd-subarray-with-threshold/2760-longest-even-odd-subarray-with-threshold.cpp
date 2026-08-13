
    class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n = nums.size();
        int maxlen = 0;

        for (int i = 0; i < n; i++) {

            // First element must be even and within threshold
            if (nums[i] % 2 != 0 || nums[i] > threshold)
                continue;

            for (int j = i; j < n; j++) {

                if (nums[j] > threshold)
                    break;

                if (j == i) {
                    maxlen = max(maxlen, 1);
                }
                else if ((nums[j] % 2) != (nums[j - 1] % 2)) {
                    maxlen = max(maxlen, j - i + 1);
                }
                else {
                    break;
                }
            }
        }

        return maxlen;
    }
};
