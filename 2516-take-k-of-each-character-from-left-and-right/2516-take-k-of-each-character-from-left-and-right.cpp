class Solution {
public:
   int takeCharacters(string s, int k) {
    int n = s.size();

    vector<int> total(3, 0);

    for (char c : s)
        total[c - 'a']++;

    // Impossible if some character occurs less than k times
    for (int x : total) {
        if (x < k)
            return -1;
    }

    // Maximum characters we can leave in the middle
    vector<int> allowed(3);
    for (int i = 0; i < 3; i++)
        allowed[i] = total[i] - k;

    int i = 0;
    int longest = 0;
    vector<int> window(3, 0);

    for (int j = 0; j < n; j++) {
        window[s[j] - 'a']++;

        // Window contains too many of some character
        while (window[s[j] - 'a'] > allowed[s[j] - 'a']) {
            window[s[i] - 'a']--;
            i++;
        }

        longest = max(longest, j - i + 1);
    }

    return n - longest;
}
};