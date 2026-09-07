class Solution {
public:
    bool check(string s, string t){
        int n = s.size();
        int m = t.size();
        unordered_map<char,int>mpp1;
        unordered_map<char,int>mpp2;
        for(int i=0;i<n;i++){
            mpp1[s[i]]++;
        }
        for(int j=0;j<m;j++){
            mpp2[t[j]]++;
        }
        return mpp1==mpp2;
    }
    vector<string> removeAnagrams(vector<string>& words) {
           int n = words.size();
           int i = 0;
           int j = 0;
           vector<string>ans;
           ans.push_back(words[i]);
           while(j<n){
             if(!check(ans.back(),words[j])){
                ans.push_back(words[j]);
               
             }
            j++;

           }
         
          
           return ans;
    }
};