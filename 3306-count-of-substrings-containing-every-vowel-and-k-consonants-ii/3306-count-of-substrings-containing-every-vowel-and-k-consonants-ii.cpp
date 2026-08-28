
   class Solution {
public:

    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u';
    }

    long long atMost(string &word, int k) {

        if (k < 0)
            return 0;

        int n = word.size();

        int i = 0;
        int consonants = 0;

        
        vector<int> last(5, -1);

        long long ans = 0;

        for (int j = 0; j < n; j++) {

            // Add word[j]
            if (isVowel(word[j])) {

                if (word[j] == 'a')
                    last[0] = j;
                else if (word[j] == 'e')
                    last[1] = j;
                else if (word[j] == 'i')
                    last[2] = j;
                else if (word[j] == 'o')
                    last[3] = j;
                else
                    last[4] = j;

            } else {
                consonants++;
            }

            // More than k consonants
            while (consonants > k) {

                if (!isVowel(word[i]))
                    consonants--;

                i++;
            }

            // Do we have all vowels?
            int mn = *min_element(last.begin(), last.end());

            if (mn >= i) {
                ans += mn - i + 1;
            }
        }

        return ans;
    }

    long long countOfSubstrings(string word, int k) {

        return atMost(word, k) - atMost(word, k - 1);
    }
};
