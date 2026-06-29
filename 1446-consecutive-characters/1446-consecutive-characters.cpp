class Solution {
public:
    int maxPower(string s) {
        char a = s[0];
        int n = s.size();
        int count = 1;
        int maxlen = 1;
        for(int i=1;i<n;i++){
            if(s[i]==a){
                count++;
            }else{
                count = 1;
                a = s[i];
            }
            maxlen = max(maxlen,count);
        }
        return maxlen;
    }
};