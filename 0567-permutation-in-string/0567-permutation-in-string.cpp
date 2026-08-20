class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        unordered_map<char,int>mpp;
        unordered_map<char,int>target;
        for(int i=0;i<n;i++){
            target[s1[i]]++;
        }
        int i = 0;
        int j = 0;
        int count = 0;
        while(j<m){
            mpp[s2[j]]++;
            while(i<m && (j-i+1)>n){
                mpp[s2[i]]--;
                if(mpp[s2[i]]==0){
                    mpp.erase(s2[i]);
                }
                i++;
            }
            if((j-i+1)==n && target==mpp){
                count++;
            }
            j++;
        }
        if(count==0){
            return false;
        }
        return true;
    }
};