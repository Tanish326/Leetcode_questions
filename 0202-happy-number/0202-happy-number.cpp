class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int>mpp;
        while(n!=1){
            if(mpp.find(n)!=mpp.end()){
                return false;
            }
            mpp[n] = 1;
            int v = n;
            int sum = 0;
            while(v>0){
                int d = v%10;
                sum = sum + d*d;
                v = v/10;
            }
            n = sum;
        }
        return true;
    }
};