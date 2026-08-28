class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int n = s.size();
        int i = 0;
        int j = 0;
        unordered_map<char,int>mpp;
        int count = 0;
        while(j<n){
            mpp[s[j]]++;

            while(i<=j && mpp[s[j]]>=k){
                count = count + n-j;
                mpp[s[i]]--;
                if(mpp[s[i]]==0){
                    mpp.erase(s[i]);
                }
                i++;
            }
            j++;

        }
        return count;
    }
};