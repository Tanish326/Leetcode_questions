class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        int m = t.size();
        int i = 0;
        int j = 0;
        int cost = 0;
        int maxlen = 0;
        while(j<n){
            cost = cost + abs(s[j]-t[j]);
            while(i<n && cost>maxCost){
                cost = cost - abs(s[i]-t[i]);
                i++;
            }
            if(cost<=maxCost){
            maxlen = max(maxlen,(j-i+1));}
            j++;


        }
        return maxlen;
    }
};