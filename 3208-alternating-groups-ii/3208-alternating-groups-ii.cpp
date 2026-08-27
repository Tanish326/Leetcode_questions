class Solution {
public:
   int numberOfAlternatingGroups(vector<int>& colors, int k) {
    int n = colors.size();
    int i = 0;
    int count = 0;
    int groups = 0;

    for (int j = 1; j < 2 * n; j++) {

        if (colors[j % n] != colors[(j - 1) % n])
            count++;

        if (j - i + 1 > k) {
            if (colors[i % n] != colors[(i + 1) % n])
                count--;

            i++;
        }

        
        if (j - i + 1 == k && count == k - 1 && i < n ) {
            groups++;
        }
    }

    return groups;
}
};