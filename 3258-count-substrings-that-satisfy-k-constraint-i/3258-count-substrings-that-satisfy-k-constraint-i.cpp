class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n = s.size();
        int i = 0;
        int j = 0;
        int count1 = 0;
        int count0 = 0;
        int count = 0;
        while(j<n){
            if(s[j]=='1'){
                count1++;
                
            }
            if(s[j]=='0'){
                count0++;
            }
            while(i<=j && (count1>k && count0>k)){
                if(s[i]=='1'){
                    count1--;
                }
                if(s[i]=='0'){
                    count0--;
                }
                i++;
            }
            if(count1<=k || count0<=k){
                count += (j-i+1);
            }
            j++;
        }
        return count;

    }
};