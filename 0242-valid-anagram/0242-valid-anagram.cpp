class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(int j=0;j<t.size();j++){
            if(mpp.find(t[j])==mpp.end()){
                return false;
            }else{
                mpp[t[j]]--;
            }
        }
        for(auto &k : mpp){
            if(k.second>0){
                return false;
            }
        }
        return true;
    }
};