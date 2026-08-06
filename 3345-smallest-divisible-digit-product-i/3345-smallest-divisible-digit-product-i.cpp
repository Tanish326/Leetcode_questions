class Solution {
public:
    int smallestNumber(int n, int t) {
         int m = n+10;
         for(int i=n;i<=m;i++){
            int prod = 1;
            int val = i;
            while(val>0){
                int num = val%10;
                prod = prod*num;
                val = val/10;
                
            }
            if(prod%t==0){
                return i;
            }
         }
         return 0;
    }
};