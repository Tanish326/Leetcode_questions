class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string ans = "";
      
        int n = words.size();
        for(int i=0;i<n;i++){
            ans = ans + words[i];
          
        }
        int m = s.size();
        if(m<words[0].size()){
            return false;
        }
        if(ans.substr(0,m)==s){
            return true;
        }
        return false;
    }
};