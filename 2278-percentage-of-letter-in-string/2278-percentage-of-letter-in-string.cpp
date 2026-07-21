class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]==letter){
                count++;
            }
            
        }
        int val = ((double)count/n)*(100);
        return val;
    }
};