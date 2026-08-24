class Solution {
public:
   int longestBeautifulSubstring(string word) {
    int n = word.size();

    int len = 1;
    int distinct = 1;
    int maxlen = 0;

    for (int j = 1; j < n; j++) {

        if (word[j] >= word[j - 1]) {
            len++;

            if (word[j] != word[j - 1]) {
                distinct++;
            }
        }
        else {
            len = 1;
            distinct = 1;
        }

        if (distinct == 5) {
            maxlen = max(maxlen, len);
        }
    }

    return maxlen;
}
};