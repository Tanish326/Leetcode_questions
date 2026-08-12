class Solution {
public:
    bool check(string s){
        int n = s.size();
       unordered_map<char,int>mpp;
       for(int i=0;i<n;i++){
        if(mpp.find(s[i])!=mpp.end()){
            return false;
        }
        mpp[s[i]] = 1;
       }
       return true;
    }
    int countGoodSubstrings(string s) {
        int n = s.size();
        int count = 0;
        for(int i=0;i<n-2;i++){
            string ans = "";
            for(int j=0;j<3;j++){
                  ans = ans + s[i+j];
            }
            if(check(ans)){
                count++;
            }
        }
        return count;
    }
};