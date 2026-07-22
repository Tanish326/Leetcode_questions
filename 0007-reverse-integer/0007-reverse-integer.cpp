class Solution {
public:
    int reverse(int x) {
        long rev = 0;
          int sign = 1;
          long long v = x;
        if(v<0){
            sign = -1;
            v = sign*v;
        }
      
        while(v>0){
            int val = v%10;
            rev = rev*10 + val;
              v = v/10;
        }
        if((sign*rev)>INT_MAX){
            return 0;
        }
        if(sign*rev<INT_MIN){
            return 0;
        }
        return sign*rev;
    }
};