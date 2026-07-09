class Solution {
public:
  long long check(int maxeat, vector<int>& piles, int val) {
    long long count = 0;
    for (int i = 0; i < piles.size(); i++) {
        if (piles[i] <= val) {
            count = count + 1;
        } else {
            if (piles[i] % val == 0) {
                count = count + piles[i] / val;
            } else {
                count += 1 + piles[i] / val;
            }
        }
    }
    return count;
}

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 1;
        int end = *max_element(piles.begin(), piles.end());
        int ans = end;

        while (l <= end) {
            int mid = l + (end - l) / 2;

            if (check(h,piles,mid) <= h) {
                ans = mid;
                end = mid - 1;   // try smaller speed
            } else {
                l = mid + 1;     // need larger speed
            }
        }
        return ans;
    }
};