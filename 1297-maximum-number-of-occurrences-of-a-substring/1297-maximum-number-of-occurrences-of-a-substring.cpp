
   class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<char,int> cnt;
        unordered_map<string,int> freq;

        int i = 0, ans = 0;

        for (int j = 0; j < s.size(); j++) {
            cnt[s[j]]++;

            if (j - i + 1 > minSize) {
                cnt[s[i]]--;
                if (cnt[s[i]] == 0) cnt.erase(s[i]);
                i++;
            }

            if (j - i + 1 == minSize && cnt.size() <= maxLetters) {
                string sub = s.substr(i, minSize);
                ans = max(ans, ++freq[sub]);
            }
        }

        return ans;
    }
};
