class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int ind = haystack.find(needle);
        if(ind>=0 && ind<n){
            return ind;
        }
        return -1;
    }
};