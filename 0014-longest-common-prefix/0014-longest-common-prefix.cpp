class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans = "";
        int m = strs[0].size();
        for(int i=0;i<m;i++){
            char c = strs[0][i];
            for(int j=1;j<n;j++){
                if(i>strs[j].size() || strs[j][i]!=c){
                    return ans;
                }

             
            }
            ans = ans + c;
        }
        return ans;
    }
};