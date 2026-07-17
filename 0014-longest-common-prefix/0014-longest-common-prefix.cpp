class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(),strs.end());
        string firststring = strs[0];
        string laststring = strs[n-1];
        string ans = "";
        for(int i=0;i<min(firststring.size(),laststring.size());i++){
            if(firststring[i]!=laststring[i]){
                return ans;
            }
            ans = ans + firststring[i];
        }
        return ans;
    }
};