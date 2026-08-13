class Solution {
public:
    bool check(int st,int end,string s){
        unordered_map<char,int>mpp;
        for(int i=st;i<=end;i++){
           mpp[s[i]]++;
        }
        for(auto &i : mpp){
            if(i.second>2){
                return false;
            }
        }
        return true;
    }
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int maxlen = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(check(i,j,s)){
                    maxlen = max(maxlen,j-i+1);
                }
            }
        }
        return maxlen;
    }
};