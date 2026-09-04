class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        int prevI = -1;
        int prevD = -1;
        vector<int>ans(n+1);
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                if(prevI==-1){
                    ans[i] = 0;
                    prevI = 0;
                }else{
                    ans[i] = prevI + 1;
                    prevI = ans[i];
                }
            }else{
                if(prevD==-1){
                    ans[i] = n;
                    prevD = n;
                }else{
                    ans[i] = prevD - 1;
                    prevD = ans[i];
                }
            }


        }
        if(s[n-1]=='I'){
            ans[n] = prevI + 1;
        }else{
            ans[n] = prevD - 1;
        }
        return ans;
    }
};