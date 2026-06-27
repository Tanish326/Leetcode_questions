class Solution {
public:
    bool checkString(string s) {
        int counta = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                counta++;
            }
        }
        int c= 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
               c++;
            }else{
                break;
            }
        }
        if(c==counta){
            return true;
        }
        return false;
    }
};