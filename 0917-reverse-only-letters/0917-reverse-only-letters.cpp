class Solution {
public:
    void swap(char *a, char *b){
        char t = *a;
        *a = *b;
        *b = t;
    }
    bool check(char c){
        if((c>='a' && c<='z') || c>='A' && c<='Z'){
            return true;
        }
        return false;
    }
    string reverseOnlyLetters(string s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            while(i<j && !check(s[i])){
                i++;
            }
            while(j>i && !check(s[j])){
                j--;
            }
            if(check(s[i]) && check(s[j])){
                swap(&s[i],&s[j]);
                    i++;
                 j--;

            }
        
        }
        return s;
        
    }
};