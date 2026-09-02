class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        int n = s.size();
        int m = t.size();
        while(i<s.size() && j<t.size()){
            if(i<n && j<m && s[i]==t[j]){
                i++;
            
            }
            j++;
        }
        if(i==s.size()){
            return true;
        }
        return false;
    }
};