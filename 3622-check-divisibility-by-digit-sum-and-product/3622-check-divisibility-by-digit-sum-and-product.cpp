class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum = 0;
        long long prod = 1;
        int a = n;
        while(n>0){
            int val = n%10;
            sum =(long long)(sum + val);
            prod =(long long)(prod*val);
            n = n/10;

        }
        long long cs = (long long)(sum + prod);
        if(a%cs==0){
            return true;
        }
        return false;
    }
};