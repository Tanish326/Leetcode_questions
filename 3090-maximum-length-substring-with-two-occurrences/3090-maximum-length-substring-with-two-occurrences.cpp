class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        unordered_map<char,int>mpp;
        int i = 0;
        int j = 0;
        int maxlen = 0;
        while(j<n){
            mpp[s[j]]++;
            while(i<=j && mpp[s[j]]>2){
                mpp[s[i]]--;
                if(mpp[s[i]]==0){
                    mpp.erase(s[i]);
                }
                i++;
            }
            if(mpp[s[j]]<=2){
                maxlen = max(maxlen,(j-i+1));

            }
            j++;
        }
        return maxlen;
    }
};