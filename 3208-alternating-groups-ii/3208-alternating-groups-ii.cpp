class Solution {
public:
   int numberOfAlternatingGroups(vector<int>& colors, int k) {
    int n = colors.size();
    int groups = 0;
    int len = 1;

    for (int j = 1; j < 2 * n; j++) {
        if (colors[j % n] != colors[(j - 1) % n]) {
            len++;
        } else {
            len = 1;
        }

        if (len >= k && (j-k+1)<n) {
            groups++;
        }
    }

    return groups;
}
};