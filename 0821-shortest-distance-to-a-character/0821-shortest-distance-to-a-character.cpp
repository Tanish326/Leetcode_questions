class Solution {
public:
  vector<int> shortestToChar(string s, char c) {
    int n = s.size();
    vector<int> ans(n, 1e9);

    int dist = 1e9;

    // Left → right
    for (int i = 0; i < n; i++) {
        if (s[i] == c)
            dist = 0;
        else if (dist != 1e9)
            dist++;

        ans[i] = dist;
    }

    dist = 1e9;

    // Right → left
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == c)
            dist = 0;
        else if (dist != 1e9)
            dist++;

        ans[i] = min(ans[i], dist);
    }

    return ans;
}
};