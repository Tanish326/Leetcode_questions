class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        int count = 0;
        unordered_map<char,int>mpp;
        while(j<n){
            mpp[s[j]]++;
            while((j-i+1)>3){
                mpp[s[i]]--;
                if(mpp[s[i]]==0){
                    mpp.erase(s[i]);
                }
                i++;
            }
            if(mpp.size()==3 && (j-i+1)==3){
                count++;
            }
            j++;
        }
        return count;
    }
};