class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        int valid = 0;
        int st = 0;
        int minlen = 1e9;
        unordered_map<char,int>mpp;
        for(int i=0;i<t.size();i++){
            mpp[t[i]]++;
        }
        int i=0;
        int j = 0;
        while(j<n){
            if(mpp.find(s[j])!=mpp.end() ){
                if(mpp[s[j]]>0){
                valid++;}
                mpp[s[j]]--;
            }
            while(i<=j && valid==m){
                 if((j-i+1)<minlen){
                    minlen = (j-i+1);
                    st = i;
                 }
                 if(mpp.find(s[i])!=mpp.end()){
                 mpp[s[i]]++;
                 if(mpp[s[i]]>0){
                    valid = valid-1;
                 }}
                 i++;
            }
            j++;
            
        }
        if(minlen==1e9){
            return "";
        }
        return s.substr(st,minlen);
    }
};