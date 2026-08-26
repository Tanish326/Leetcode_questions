class Solution {
public:
   string shortestBeautifulSubstring(string s, int k) {
    int n = s.size();
    int i = 0;
    int j = 0;
    int st = 0;
    int count = 0;
    int minlen = 1e9;

    while (j < n) {

        if (s[j] == '1') {
            count++;
        }

        // Too many 1s -> shrink
        while (i <= j && count > k) {
            if (s[i] == '1') {
                count--;
            }
            i++;
        }

        // Exactly k ones
       if (count == k) {
    while (i <= j && s[i] == '0') {
        i++;
    }

    int len = j - i + 1;

    if (len < minlen ||
        (len == minlen && s.substr(i, len) < s.substr(st, minlen))) {
        st = i;
        minlen = len;
    }
}
        j++;
    }

    return minlen == 1e9 ? "" : s.substr(st, minlen);
}
};