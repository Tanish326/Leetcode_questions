class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = m + n;
        int gap = (len / 2) + (len % 2);

        while (gap > 0) {
            int i = 0;
            int j = i + gap;

            while (j < len) {
                // case 1: both pointers in nums1
                if (i < m && j < m) {
                    if (nums1[i] > nums1[j]) {
                        swap(nums1[i], nums1[j]);
                    }
                }
                // case 2: i in nums1, j in nums2
                else if (i < m && j >= m) {
                    if (nums1[i] > nums2[j - m]) {
                        swap(nums1[i], nums2[j - m]);
                    }
                }
                // case 3: both pointers in nums2
                else {
                    if (nums2[i - m] > nums2[j - m]) {
                        swap(nums2[i - m], nums2[j - m]);
                    }
                }

                i++;
                j++;
            }

            if (gap == 1) break;
            gap = (gap / 2) + (gap % 2);
        }

        // copy nums2 into nums1
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};