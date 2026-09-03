class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.size();
        int m = t.size();
        int i = n-1;
        string a = "";
        string b = "";
        int j = m-1;
        int count = 0;
        while(i>=0){
            if(s[i]=='#'){
                count++;
            }else{
                if(count==0){
                    a = a + s[i];

                }else if(count>0){
                    count--;

                }
            }
            i--;

        }
        count = 0;
        while(j>=0){
              if(t[j]=='#'){
                count++;
            }else{
                if(count==0){
                    b = b + t[j];

                }else if(count>0){
                    count--;

                }
            }
            j--;


        }
        return a==b;
    }
};