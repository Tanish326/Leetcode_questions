class Solution {
public:
    bool checkZeroOnes(string s) {
        int n = s.size();
        int count1 = 0;
        int count0 = 0;
        int max0 = -1e9;
        int max1 = -1e9;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                count0 = 0;
                count1++;
            }else{
                count1 = 0;
                count0++;
            }
            max0 = max(max0,count0);
            max1 = max(max1,count1);
        }
        if(max0>=max1){
            return false;
        }
        return true;
    }
};