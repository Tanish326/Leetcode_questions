class Solution {
public:
    int numberOfSubstrings(string s) {
        map<int,int>mpp;
        int count = 0;
        int n = s.size();
        mpp[0] = -1;
        mpp[1] = -1;
        mpp[2] = -1;
        for(int i=0;i<n;i++){
            
                mpp[s[i]-'a'] = i;

            
            if(mpp[0]!=-1 && mpp[1]!= -1 && mpp[2]!=-1){
                count = count +  (1+min({mpp[0],mpp[1],mpp[2]}));
            }
        }
        return count;
    }
};