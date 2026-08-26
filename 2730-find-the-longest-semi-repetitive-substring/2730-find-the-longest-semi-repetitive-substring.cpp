class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        int maxlen = 0;
        int count = 0;
        while(j<n){
            if(j>0 && s[j]==s[j-1]){
                count++;
            }
            while(i<n && count>1){
                if( s[i]==s[i+1]){
                    count--;
                }
                i++;
            }
            if((count)<=1){
                maxlen = max(maxlen,(j-i+1));
            }
            j++;
        }
        return maxlen;
    }
};