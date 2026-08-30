class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size();
        vector<string>ans;
         unordered_map<string,int>mpp;
         int i = 0;
         int j = 0;
         while((j+10)<=n){
            string a = s.substr(j,10);
            mpp[a]++;
            if(mpp[a]==2){
                ans.push_back(a);
            }
             
             
             j++;


         }
         return ans;
    }
};