class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mpp;
        string temp = "IVXLCDM";
        int val = 1;
        mpp[temp[0]] = 1;
        for(int i=1;i<temp.size();i++){
             if(i%2==0){
                val = val*2;
                mpp[temp[i]] = val;
             }else{
                val = val*5;
                mpp[temp[i]] = val;
             }
        }
        int sum = 0;
        int n = s.size();
        char ans = s[n-1];
        sum = sum + mpp[s[n-1]];
        for(int i=s.size()-2;i>=0;i--){
            if(mpp[s[i]]<mpp[ans]){
                sum = sum - mpp[s[i]];
             
            }else{
                sum = sum + mpp[s[i]];
               
            }
           ans = s[i];

        }
        return sum;
    }
};