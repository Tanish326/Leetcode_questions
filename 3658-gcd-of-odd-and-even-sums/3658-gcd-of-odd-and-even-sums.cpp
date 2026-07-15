class Solution {
public:
    int gcdOfOddEvenSums(int n) {
       int sumodd = 0;
       int sumeven = 0;
        for(int i=1;i<=(2*n);i++){
            if(i%2==0){
                sumeven += i;
            }else{
                sumodd += i;
            }
         
        }
        int ans;
        for(int i=1;i<=sumeven;i++){
            if((sumeven%i==0) && (sumodd%i==0)){
                ans = i;
            }
        }
        return ans;
    }
};