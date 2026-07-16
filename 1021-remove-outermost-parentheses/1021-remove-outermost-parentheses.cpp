class Solution {
public:
    string removeOuterParentheses(string s) {
          int n = s.size();
          int i = 0;
          int j = 0;
          string ans;
          int count = 0;
          while(j<n){
            if(s[j]=='('){
                count++;
            }else{
                count--;
                if(count==0){
                    count = 0;
                  s[i] = '#';
                  s[j] = '#';
                  i = j+1;
                }
            }
            j++;
          }

      for(int i=0;i<n;i++){
        if(s[i]!='#'){
            ans.push_back(s[i]);
        }
      }
        return ans;
    }
};