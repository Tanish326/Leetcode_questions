class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mpp1;
        unordered_map<string,char>mpp2;
        
        int i = 0;
        int j = 0;
        vector<string>ans;
        int n = s.size();
      while(j < n) {
    if(s[j] == ' ') {
        ans.push_back(string(s.begin() + i, s.begin() + j));
        i = j + 1;
    }
    j++;
}

ans.push_back(string(s.begin() + i, s.end()));
        if(ans.size()!=pattern.size()){
            return false;
        }
        int m = pattern.size();
        for(int i=0;i<m;i++){
          if(mpp1.find(pattern[i]) != mpp1.end()) {
    if(mpp1[pattern[i]] != ans[i])
        return false;
}
else if(mpp2.find(ans[i]) != mpp2.end()) {
    if(mpp2[ans[i]] != pattern[i])
        return false;
}
else {
    mpp1[pattern[i]] = ans[i];
    mpp2[ans[i]] = pattern[i];
}
        }
        return true;
    }
};