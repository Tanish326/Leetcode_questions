class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        
        vector<long long>ans;
        while(n>0){
            int val = n%10;
            if(val!=0){
                sum = sum + val;
                ans.push_back(val);
            }
            n = n/10;
        }
        reverse(ans.begin(),ans.end());
        long long num = 0;
        for(int i=0;i<ans.size();i++){
             num = num*10 + ans[i];
        }
        return sum*num;
    }
};