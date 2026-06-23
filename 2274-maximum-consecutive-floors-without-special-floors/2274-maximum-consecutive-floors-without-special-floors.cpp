class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        sort(special.begin(),special.end());
        int n = special.size();
        int maxlen = -1e9;
        maxlen = max(maxlen,special[0]-bottom);
        for(int i=1;i<n;i++){
           maxlen = max(maxlen,special[i]-special[i-1]-1);
        }
        maxlen = max(maxlen,top-special[n-1]);
        return maxlen;
    }
};