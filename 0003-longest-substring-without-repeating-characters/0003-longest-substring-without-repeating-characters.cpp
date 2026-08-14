class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char,int>mpp;
        int i = 0;
        int j = 0;
        int maxlen = 0;
        while(j<n){
            mpp[s[j]]++;
            while(i<n && mpp[s[j]]>1){
                mpp[s[i]]--;
                i++;
            }
          if(mpp[s[j]]<=1){
           maxlen = max(maxlen,(j-i+1));}
           j++;
            

        }
        return maxlen;

    }
};