class Solution {
public:
    char repeatedCharacter(string s) {
         int n = s.size();
         unordered_map<char,int>mpp;
         for(int i=0;i<n;i++){
            if(mpp.find(s[i])!=mpp.end()){
                return s[i];
            }
            mpp[s[i]]++;
         }
         return ' ';
    }
};