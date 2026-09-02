class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        int i = 0;
        int j = 0;
        while(i<s.size() && j<t.size()){
            while(i<n && j<m && s[i]!=t[j]){
                j++;
            }
            if(s[i]==t[j]){
                i++;
                j++;
            }
        }
        if(i==n){
            return true;
        }
        return false;
      
    }
};