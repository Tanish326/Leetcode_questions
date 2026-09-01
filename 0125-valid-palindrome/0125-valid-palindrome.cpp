class Solution {
public:
    bool isalphanumeric(char c){
        if(tolower(c)>='a' && tolower(c)<='z' || (c>='0' && c<='9')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<=j){
            if(!isalphanumeric(s[i])){
                i++;
                continue;
            }
            if(!isalphanumeric(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
      
         
         return true;
         
    }
};