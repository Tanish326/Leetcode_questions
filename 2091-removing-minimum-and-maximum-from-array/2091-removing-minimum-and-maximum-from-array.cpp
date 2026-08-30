class Solution {
public:
  int minimumDeletions(vector<int>& nums) {
    int n = nums.size();

    int max_elem = *max_element(nums.begin(), nums.end());
    int min_elem = *min_element(nums.begin(), nums.end());

    int max_idx = 0;
    int min_idx = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] == max_elem)
            max_idx = i;

        if (nums[i] == min_elem)
            min_idx = i;
    }

    int a = min(max_idx, min_idx);
    int b = max(max_idx, min_idx);

    // Both from left
    int option1 = b + 1;

    // Both from right
    int option2 = n - a;

    // a from left, b from right
    int option3 = (a + 1) + (n - b);

    return min({option1, option2, option3});
}
};