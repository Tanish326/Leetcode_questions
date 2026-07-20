class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        int n = strs.size();
        unordered_map<string,vector<string>>mpp;
        for(int i=0;i<n;i++){
            string word = strs[i];
            sort(word.begin(),word.end());
            mpp[word].push_back(strs[i]);
        }
        for(auto &k : mpp){
            ans.push_back(k.second);
        }
        return ans;
    }
};