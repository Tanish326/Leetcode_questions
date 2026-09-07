class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>>ans;
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