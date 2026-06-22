class Solution {
public:
    int maxNumberOfBalloons(string text) {
          int n = text.size();
          unordered_map<char,int>mpp;
          string ans = "balloon";
          int minfreq = 1e9;
         for(int i=0;i<n;i++){
            mpp[text[i]]++;
         }
         for(int i=0;i<ans.size();i++){
            int count = 0;
            if(mpp.find(ans[i])!=mpp.end()){
                
                 count = mpp[ans[i]];
                  if(ans[i]=='l' || ans[i]=='o'){
                count = count / 2;
            }
               
            }
            if(count<minfreq){
                minfreq = count;
            }
         }
         return minfreq;
    }
};