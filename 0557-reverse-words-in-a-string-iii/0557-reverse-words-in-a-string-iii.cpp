class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        while(j<n){
            if(s[j]==' '){
                reverse(s.begin()+i,s.begin()+j);
                j++;
                i = j;
            }
            j++;
        }
        reverse(s.begin()+i,s.begin()+j);
        return s;
    }
};