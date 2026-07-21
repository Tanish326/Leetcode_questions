class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int n = s.size();
       int maxnested  = -1e9;
       for(int i=0;i<n;i++){
        if(s[i]=='('){
            count++;
          
        }else if(s[i]==')'){
            count--;
            if(count==0){
                count = 0;
            }
        }
          maxnested = max(maxnested,count);
       }
       return maxnested;
    }
};