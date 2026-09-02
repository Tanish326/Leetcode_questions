class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        int i = 0;
        int j = 0;
        int count = 0;
        if(n<k){
            reverse(s.begin(),s.end());
            return s;
        }
      
        while(j<n){
            if(count==(2*k)){
                count = 0;
                i = j;
            }else if(count==k){
               
                reverse(s.begin()+i,s.begin()+i+k);
       
            }
            count++;
            j++;

        }
        if(count<=k){
            reverse(s.begin()+i,s.end());
        }
        return s;
    }
};