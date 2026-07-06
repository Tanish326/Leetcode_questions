class Solution {
public:
    int count = 0;

    void merge(int l, int m, int h, vector<int>& nums) {
        // Step 1: count reverse pairs
        int right = m + 1;
        for (int c = l; c <= m; c++) {
            while (right <= h && (long long)nums[c] > 2LL * nums[right]) {
                right++;
            }
            count += right - (m + 1);
        }

        // Step 2: merge the two sorted halves
        int i = l;
        int j = m + 1;
        vector<int> ans;

        while (i <= m && j <= h) {
            if (nums[i] <= nums[j]) {
                ans.push_back(nums[i]);
                i++;
            } else {
                ans.push_back(nums[j]);
                j++;
            }
        }

        while (i <= m) {
            ans.push_back(nums[i]);
            i++;
        }

        while (j <= h) {
            ans.push_back(nums[j]);
            j++;
        }

        for (int k = l; k <= h; k++) {
            nums[k] = ans[k - l];
        }
    }

    void merge_sort(int low, int high, vector<int>& nums) {
        if (low >= high) return;

        int mid = (low + high) / 2;
        merge_sort(low, mid, nums);
        merge_sort(mid + 1, high, nums);
        merge(low, mid, high, nums);
    }

    int reversePairs(vector<int>& nums) {
        count = 0;
        merge_sort(0, nums.size() - 1, nums);
        return count;
    }
};