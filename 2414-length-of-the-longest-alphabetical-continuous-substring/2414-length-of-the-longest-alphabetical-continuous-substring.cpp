class Solution {
public:
    int longestContinuousSubstring(string s) {
        int count = 1;
        int n = s.size();
        int a = s[0] - 'a';
        int maxlen = 1;
        for(int i=1;i<n;i++){
          
           if((s[i]-'a')-a==1){
            count++;
           }else{
            count = 1;
             
           }
           a = s[i]-'a';
         maxlen = max(maxlen,count);
        }
        return maxlen;
    }
};